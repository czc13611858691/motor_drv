#include "hardwareRelateTest.h"

void hardwareTestInit(void)
{
#if TIME_UTILS_TEST_SWITCH
    TestDelayMsInit();
#endif
}

void hardwareTestRun(void)
{
#if TIME_UTILS_TEST_SWITCH
    TestDelayMsRun();
#endif
}