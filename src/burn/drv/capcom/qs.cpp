#include "cps.h"
/* QSound */

static INT32 nQsndCyclesExtra;

static INT32 qsndTimerOver(INT32, INT32)
{
	ZetSetIRQLine(0xFF, ZET_IRQSTATUS_AUTO);

	return 0;
}

INT32 QsndInit(void)
{
	INT32 nRate = 11025;

	/* Init QSound z80 */
	if (QsndZInit())
		return 1;
	BurnTimerInit(qsndTimerOver, NULL);

	if (Cps1Qs == 1)
   {
		nCpsZ80Cycles = 6000000 * 100 / nBurnFPS;
		BurnTimerAttachZet(6000000);
	}
   else
   {
		nCpsZ80Cycles = 8000000 * 100 / nBurnFPS;
		BurnTimerAttachZet(8000000);
	}

	if (nBurnSoundRate >= 0)
		nRate = nBurnSoundRate;

	QscInit(nRate);		/* Init QSound chip */

	return 0;
}

void QsndSetRoute(INT32 nIndex, double nVolume, INT32 nRouteDir)
{
	QscSetRoute(nIndex, nVolume, nRouteDir);
}

void QsndReset(void)
{
	ZetOpen(0);
	BurnTimerReset();
	BurnTimerSetRetrig(0, 1.0 / 252.0);
	ZetClose();

	nQsndCyclesExtra = 0;
}

void QsndExit(void)
{
	QscExit();							/* Exit QSound chip */
	QsndZExit();
}

INT32 QsndScan(INT32 nAction)
{
	if (nAction & ACB_DRIVER_DATA)
   {
		QsndZScan(nAction);				/* Scan Z80 */
		QscScan(nAction);				/* Scan QSound Chip */
	}

	return 0;
}

void QsndNewFrame(void)
{
   ZetNewFrame();

   ZetOpen(0);
   ZetIdle(nQsndCyclesExtra);

   QscNewFrame();
}

void QsndEndFrame(void)
{
   BurnTimerEndFrame(nCpsZ80Cycles);
   if (pBurnSoundOut)
      QscUpdate(nBurnSoundLen);

   nQsndCyclesExtra = ZetTotalCycles() - nCpsZ80Cycles;
   ZetClose();
}

void QsndSyncZ80(void)
{
   int nCycles = (INT64)SekTotalCycles() * nCpsZ80Cycles / nCpsCycles;

   if (nCycles <= ZetTotalCycles())
      return;

   BurnTimerUpdate(nCycles);
}
