#pragma once

#include "time_utils_test.h"

#define HARDWARE_TEST_SWITCH 1
#if HARDWARE_TEST_SWITCH
#define TIME_UTILS_TEST_SWITCH 1
#endif
void hardwareTestInit(void);
void hardwareTestRun(void);