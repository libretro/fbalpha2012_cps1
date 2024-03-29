#ifndef __PORT_TYPEDEFS_H
#define __PORT_TYPEDEFS_H

#include <stdint.h>
#include <wchar.h>

#include "../../src/intf/input/inp_keys.h"
#define TCHAR char
#define _T(x) x
#define _tfopen fopen
#define _tcstol strtol
#define _tcsstr strstr
#define _istspace(x) isspace(x)
#define _stprintf sprintf
#define _tcslen strlen
#define _tcsicmp(a, b) strcasecmp(a, b)
#define _tcscpy(to, from) strcpy(to, from)
#define _fgetts fgets
#define _strnicmp(s1, s2, n) strncasecmp(s1, s2, n)
#define _tcsncmp strncmp
#define _tcsncpy strncpy
#define _stscanf sscanf
#define _ftprintf fprintf

#ifdef _MSC_VER
#include <tchar.h>
#define strncasecmp(s1, s2, n) _strnicmp(s1, s2, n)
#define strcasecmp(x, y) _stricmp(x, y)
#define snprintf _snprintf
#else
#define _stricmp(x, y) strcasecmp(x,y)

typedef struct { int x, y, width, height; } RECT;
#undef __cdecl
#define __cdecl
#endif

#undef __fastcall
#undef _fastcall
#define __fastcall			/*what does this correspond to?*/
#define _fastcall			/*same as above - what does this correspond to?*/

/* for Windows / Xbox 360 (below VS2010) - typedefs for missing stdint.h types such as uintptr_t?*/

extern void InpDIPSWResetDIPs (void);

#endif
