#include "Arduino.h"
#include "hardwareRelateTest.h"

void setup() {
  // put your setup code here, to run once:
#if HARDWARE_TEST_SWITCH
  hardwareTestInit();
#endif
}

void loop() {
  // put your main code here, to run repeatedly:
#if HARDWARE_TEST_SWITCH
  hardwareTestRun();
#endif
}
