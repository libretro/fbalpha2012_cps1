/* FM timers */

#define TIMER_TICKS_PER_SECOND (2048000000)
#define MAKE_TIMER_TICKS(n, m) ((INT64)(n) * TIMER_TICKS_PER_SECOND / (m))
#define MAKE_CPU_CYCLES(n, m) ((INT64)(n) * (m) / TIMER_TICKS_PER_SECOND)

extern "C" double BurnTimerGetTime(void);

/* Callbacks for various sound chips */
/* period = cnt * stepTime in seconds */
void BurnOPNTimerCallback(INT32 n, INT32 c, INT32 cnt, double stepTime);	
/* Start / stop a timer */
/* period in seconds */
void BurnTimerSetRetrig(INT32 c, double period);
/* period in seconds */
void BurnTimerSetOneshot(INT32 c, double period);

extern double dTime;

void BurnTimerExit(void);
void BurnTimerReset(void);
INT32 BurnTimerInit(INT32 (*pOverCallback)(INT32, INT32), double (*pTimeCallback)());
INT32 BurnTimerAttachZet(INT32 nClockspeed);
void BurnTimerScan(INT32 nAction, INT32* pnMin);
INT32 BurnTimerUpdate(INT32 nCycles);
void BurnTimerEndFrame(INT32 nCycles);
