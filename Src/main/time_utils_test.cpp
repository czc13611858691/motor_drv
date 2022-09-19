#include "time_utils_test.h"

void TestDelayMsInit(void)
{
  Serial.begin(9600);
}

void TestDelayMsRun(void)
{
  Serial.print("delay 1s test\r\n");
  _delay(1000);
}