// FB Alpha - Emulator for MC68000/Z80 based arcade games
//            Refer to the "license.txt" file for more info

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>

#include "tchar.h"

// Macro to make quoted strings
#define MAKE_STRING_2(s) #s
#define MAKE_STRING(s) MAKE_STRING_2(s)

#define BZIP_MAX (20)								// Maximum zip files to search through
#define DIRS_MAX (20)								// Maximum number of directories to search

#include "title.h"
#include "burn.h"

// ---------------------------------------------------------------------------
// OS dependent functionality
typedef struct tagIMAGE {
	unsigned int	width;
	unsigned int	height;
	unsigned int	rowbytes;
	unsigned int	imgbytes;
	unsigned char**	rowptr;
	unsigned char*	bmpbits;
	unsigned int	flags;
} IMAGE;

#if defined (BUILD_WIN32)
 #include "burner_win32.h"
#elif defined (BUILD_SDL)
 #include "burner_sdl.h"
#elif defined (_XBOX) && !defined(__LIBRETRO__)
 #include "burner_xbox.h"
#elif defined(__LIBRETRO__)
#include "burner_libretro.h"
#endif

#if defined (INCLUDE_LIB_PNGH)
 #include "png.h"
#endif

// ---------------------------------------------------------------------------
// OS independent functionality

#ifndef __LIBRETRO__
#include "interface.h"
#endif

// Macros for parsing text
#define SKIP_WS(s) while (_istspace(*s)) { s++; }			// Skip whitespace

// gami.cpp
extern struct GameInp* GameInp;
extern UINT32 nGameInpCount;
extern UINT32 nMacroCount;
extern UINT32 nMaxMacro;

extern INT32 nAnalogSpeed;

extern INT32 nFireButtons;

extern bool bStreetFighterLayout;
extern bool bLeftAltkeyMapped;

INT32 GameInpInit();
INT32 GameInpExit();
TCHAR* InputCodeDesc(INT32 c);
TCHAR* InpToDesc(struct GameInp* pgi);
TCHAR* InpMacroToDesc(struct GameInp* pgi);
#ifndef __LIBRETRO__
void GameInpCheckLeftAlt();
void GameInpCheckMouse();
#endif
INT32 GameInpBlank(INT32 bDipSwitch);
INT32 GameInputAutoIni(INT32 nPlayer, TCHAR* lpszFile, bool bOverWrite);
INT32 ConfigGameLoadHardwareDefaults();
INT32 GameInpDefault();
INT32 GameInpWrite(FILE* h);
INT32 GameInpRead(TCHAR* szVal, bool bOverWrite);
INT32 GameInpMacroRead(TCHAR* szVal, bool bOverWrite);
INT32 GameInpCustomRead(TCHAR* szVal, bool bOverWrite);

// Player Default Controls
extern INT32 nPlayerDefaultControls[4];
extern TCHAR szPlayerDefaultIni[4][MAX_PATH];

// cong.cpp
extern const INT32 nConfigMinVersion;					// Minimum version of application for which input files are valid

// gamc.cpp
INT32 GamcMisc(struct GameInp* pgi, char* szi, INT32 nPlayer);
INT32 GamcAnalogKey(struct GameInp* pgi, char* szi, INT32 nPlayer, INT32 nSlide);
INT32 GamcAnalogJoy(struct GameInp* pgi, char* szi, INT32 nPlayer, INT32 nJoy, INT32 nSlide);
INT32 GamcPlayer(struct GameInp* pgi, char* szi, INT32 nPlayer, INT32 nDevice);
INT32 GamcPlayerHotRod(struct GameInp* pgi, char* szi, INT32 nPlayer, INT32 nFlags, INT32 nSlide);

// misc.cpp
#define QUOTE_MAX (128)															// Maximum length of "quoted strings"
INT32 QuoteRead(TCHAR** ppszQuote, TCHAR** ppszEnd, TCHAR* pszSrc);					// Read a quoted string from szSrc and poINT32 to the end
TCHAR* LabelCheck(TCHAR* s, TCHAR* pszLabel);

TCHAR* ExtractFilename(TCHAR* fullname);
TCHAR* DriverToName(UINT32 nDrv);
UINT32 NameToDriver(TCHAR* szName);

extern INT32 bDoGamma;
extern INT32 bHardwareGammaOnly;
extern double nGamma;

INT32 SetBurnHighCol(INT32 nDepth);
char* DecorateGameName(UINT32 nBurnDrv);
TCHAR* DecorateGenreInfo();
void ComputeGammaLUT();

// state.cpp

// statec.cpp
INT32 BurnStateCompress(UINT8** pDef, INT32* pnDefLen, INT32 bAll);
INT32 BurnStateDecompress(UINT8* Def, INT32 nDefLen, INT32 bAll);

// zipfn.cpp
struct ZipEntry { char* szName;	UINT32 nLen; UINT32 nCrc; };

INT32 ZipOpen(char* szZip);
INT32 ZipClose();
INT32 ZipGetList(struct ZipEntry** pList, INT32* pnListCount);
INT32 ZipLoadFile(UINT8* Dest, INT32 nLen, INT32* pnWrote, INT32 nEntry);
INT32 __cdecl ZipLoadOneFile(char* arcName, const char* fileName, void** Dest, INT32* pnWrote);
