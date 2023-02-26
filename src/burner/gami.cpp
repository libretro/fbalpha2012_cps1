/* Burner Game Input */
#include <stdio.h>
#include "burner.h"

/* Player Default Controls */
static INT32 nPlayerDefaultControls[4] = {0, 1, 2, 3};

/* Mapping of PC inputs to game inputs */
struct GameInp* GameInp = NULL;
UINT32 nGameInpCount = 0;
UINT32 nMacroCount = 0;
UINT32 nMaxMacro = 0;

INT32 nAnalogSpeed;

INT32 nFireButtons = 0;

bool bStreetFighterLayout = false;

/* --------------------------------------------------------------------------- */

INT32 GameInpBlank(INT32 bDipSwitch)
{
	UINT32 i = 0;
	struct GameInp* pgi = NULL;

	/* Reset all inputs to undefined (even dip switches, if bDipSwitch==1) */
	if (GameInp == NULL)
		return 1;

	/* Get the targets in the library for the Input Values */
	for (i = 0, pgi = GameInp; i < nGameInpCount; i++, pgi++) {
		struct BurnInputInfo bii;
		memset(&bii, 0, sizeof(bii));
		BurnDrvGetInputInfo(&bii, i);
		if (bDipSwitch == 0 && (bii.nType & BIT_GROUP_CONSTANT)) {		/* Don't blank the dip switches */
			continue;
		}

		memset(pgi, 0, sizeof(*pgi));									/* Clear input */

		pgi->nType = bii.nType;											/* store input type */
		pgi->Input.pVal = bii.pVal;								   /* store input pointer to value */

		if (bii.nType & BIT_GROUP_CONSTANT) {					   /* Further initialisation for constants/DIPs */
			pgi->nInput = GIT_CONSTANT;
			pgi->Input.Constant.nConst = *bii.pVal;
		}
	}

	for (i = 0; i < nMacroCount; i++, pgi++) {
		pgi->Macro.nMode = 0;
		if (pgi->nInput == GIT_MACRO_CUSTOM) {
			pgi->nInput = 0;
		}
	}

	return 0;
}

static void GameInpInitMacros(void)
{
	struct GameInp* pgi;
	struct BurnInputInfo bii;

	INT32 nPunchx3[4] = {0, 0, 0, 0};
	INT32 nPunchInputs[4][3];
	INT32 nKickx3[4] = {0, 0, 0, 0};
	INT32 nKickInputs[4][3];

	INT32 nNeogeoButtons[4][4];
	INT32 nPgmButtons[4][4];

	bStreetFighterLayout = false;
	nMacroCount = 0;

	nFireButtons = 0;

	for (UINT32 i = 0; i < nGameInpCount; i++) {
		bii.szName = NULL;
		BurnDrvGetInputInfo(&bii, i);
		if (bii.szName == NULL) {
			bii.szName = "";
		}
		if (bii.szName[0] == 'P' && bii.szName[1] >= '1' && bii.szName[1] <= '4') {
			INT32 nPlayer = bii.szName[1] - '1';

			if (nPlayer == 0) {
				if (strncmp(" fire", bii.szInfo + 2, 5) == 0) {
					nFireButtons++;
				}
			}

			if (_stricmp(" Weak Punch", bii.szName + 2) == 0) {
				nPunchx3[nPlayer] |= 1;
				nPunchInputs[nPlayer][0] = i;
			}
			if (_stricmp(" Medium Punch", bii.szName + 2) == 0) {
				nPunchx3[nPlayer] |= 2;
				nPunchInputs[nPlayer][1] = i;
			}
			if (_stricmp(" Strong Punch", bii.szName + 2) == 0) {
				nPunchx3[nPlayer] |= 4;
				nPunchInputs[nPlayer][2] = i;
			}
			if (_stricmp(" Weak Kick", bii.szName + 2) == 0) {
				nKickx3[nPlayer] |= 1;
				nKickInputs[nPlayer][0] = i;
			}
			if (_stricmp(" Medium Kick", bii.szName + 2) == 0) {
				nKickx3[nPlayer] |= 2;
				nKickInputs[nPlayer][1] = i;
			}
			if (_stricmp(" Strong Kick", bii.szName + 2) == 0) {
				nKickx3[nPlayer] |= 4;
				nKickInputs[nPlayer][2] = i;
			}
		}
	}

	pgi = GameInp + nGameInpCount;

	for (INT32 nPlayer = 0; nPlayer < nMaxPlayers; nPlayer++) {
		if (nPunchx3[nPlayer] == 7) {		/* Create a 3x punch macro */
			pgi->nInput = GIT_MACRO_AUTO;
			pgi->nType = BIT_DIGITAL;
			pgi->Macro.nMode = 0;

			sprintf(pgi->Macro.szName, "P%i 3× Punch", nPlayer + 1);
			for (INT32 j = 0; j < 3; j++) {
				BurnDrvGetInputInfo(&bii, nPunchInputs[nPlayer][j]);
				pgi->Macro.pVal[j] = bii.pVal;
				pgi->Macro.nVal[j] = 1;
			}

			nMacroCount++;
			pgi++;
		}

		if (nKickx3[nPlayer] == 7) {		/* Create a 3x kick macro */
			pgi->nInput = GIT_MACRO_AUTO;
			pgi->nType = BIT_DIGITAL;
			pgi->Macro.nMode = 0;

			sprintf(pgi->Macro.szName, "P%i 3× Kick", nPlayer + 1);
			for (INT32 j = 0; j < 3; j++) {
				BurnDrvGetInputInfo(&bii, nKickInputs[nPlayer][j]);
				pgi->Macro.pVal[j] = bii.pVal;
				pgi->Macro.nVal[j] = 1;
			}

			nMacroCount++;
			pgi++;
		}
	}

	if ((nPunchx3[0] == 7) && (nKickx3[0] == 7))
		bStreetFighterLayout = true;
}

INT32 GameInpInit(void)
{
	INT32 nRet = 0;
	/* Count the number of inputs */
	nGameInpCount = 0;
	nMacroCount = 0;
	nMaxMacro = nMaxPlayers * 12;

	for (UINT32 i = 0; i < 0x1000; i++) {
		nRet = BurnDrvGetInputInfo(NULL,i);
		if (nRet) { /* end of input list */
			nGameInpCount = i;
			break;
		}
	}

	/* Allocate space for all the inputs */
	INT32 nSize = (nGameInpCount + nMaxMacro) * sizeof(struct GameInp);
	GameInp = (struct GameInp*)malloc(nSize);
	if (GameInp == NULL)
		return 1;
	memset(GameInp, 0, nSize);

	GameInpBlank(1);

	InpDIPSWResetDIPs();

	GameInpInitMacros();

	nAnalogSpeed = 0x0100;

	return 0;
}

INT32 GameInpExit(void)
{
   if (GameInp)
   {
      free(GameInp);
      GameInp = NULL;
   }

   nGameInpCount = 0;
   nMacroCount = 0;

   nFireButtons = 0;

   bStreetFighterLayout = false;

   return 0;
}

static INT32 GameInpAutoOne(struct GameInp* pgi, char* szi)
{
	for (INT32 i = 0; i < nMaxPlayers; i++) {
		INT32 nSlide = nPlayerDefaultControls[i] >> 4;
		switch (nPlayerDefaultControls[i] & 0x0F) {
			case 0:										/* Keyboard */
				GamcAnalogKey(pgi, szi, i, nSlide);
				GamcPlayer(pgi, szi, i, -1);
				GamcMisc(pgi, szi, i);
				break;
			case 1:										/* Joystick 1 */
				GamcAnalogJoy(pgi, szi, i, 0, nSlide);
				GamcPlayer(pgi, szi, i, 0);
				GamcMisc(pgi, szi, i);
				break;
			case 2:										/* Joystick 2 */
				GamcAnalogJoy(pgi, szi, i, 1, nSlide);
				GamcPlayer(pgi, szi, i, 1);
				GamcMisc(pgi, szi, i);
				break;
			case 3:										/* Joystick 3 */
				GamcAnalogJoy(pgi, szi, i, 2, nSlide);
				GamcPlayer(pgi, szi, i, 2);
				GamcMisc(pgi, szi, i);
				break;
			case 4:										/* X-Arcade left side */
				GamcMisc(pgi, szi, i);
				GamcPlayerHotRod(pgi, szi, i, 0x10, nSlide);
				break;
			case 5:										/* X-Arcade right side */
				GamcMisc(pgi, szi, i);
				GamcPlayerHotRod(pgi, szi, i, 0x11, nSlide);
				break;
			case 6:										/* Hot Rod left side */
				GamcMisc(pgi, szi, i);
				GamcPlayerHotRod(pgi, szi, i, 0x00, nSlide);
				break;
			case 7:										/* Hot Rod right side */
				GamcMisc(pgi, szi, i);
				GamcPlayerHotRod(pgi, szi, i, 0x01, nSlide);
				break;
			default:
				GamcMisc(pgi, szi, i);
		}
	}

	return 0;
}

/* Auto-configure any undefined inputs to defaults */
INT32 GameInpDefault(void)
{
	struct GameInp* pgi;
	struct BurnInputInfo bii;
	UINT32 i;

	nAnalogSpeed = 0x0100;

	/* Fill all inputs still undefined */
	for (i = 0, pgi = GameInp; i < nGameInpCount; i++, pgi++) {
		if (pgi->nInput) {											/* Already defined - leave it alone */
			continue;
		}

		/* Get the extra info about the input */
		bii.szInfo = NULL;
		BurnDrvGetInputInfo(&bii, i);
		if (bii.pVal == NULL)
			continue;
		if (bii.szInfo == NULL)
			bii.szInfo = "";

		/* Dip switches - set to constant */
		if (bii.nType & BIT_GROUP_CONSTANT)
      {
			pgi->nInput = GIT_CONSTANT;
			continue;
		}

		GameInpAutoOne(pgi, bii.szInfo);
	}

	/* Fill in macros still undefined */
	for (i = 0; i < nMacroCount; i++, pgi++) {
		if (pgi->nInput != GIT_MACRO_AUTO || pgi->Macro.nMode) {	/* Already defined - leave it alone */
			continue;
		}

		GameInpAutoOne(pgi, pgi->Macro.szName);
	}

	return 0;
}
