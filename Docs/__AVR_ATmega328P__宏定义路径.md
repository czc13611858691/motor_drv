在specs-atmega328p中可以看到如下代码

```
-D__AVR_ATmega328P__
```

测试ARDUINO IDE中选择arduino uno板子会执行到哪

```
void _delay(unsigned long ms){
#if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega328PB__)  || defined(__AVR_ATmega2560__) || defined(__AVR_ATmega32U4__)
  // if arduino uno and other atmega328p chips
  // use while instad of delay, 
  // due to wrong measurement based on changed timer0
  unsigned long t = _micros() + ms*1000;
  while( _micros() < t ){}; 
  // 用来测试__AVR_ATmega328P__宏定义的
  Serial.print("1\r\n");
#else
  // 用来测试__AVR_ATmega328P__宏定义的
  Serial.print("2\r\n");
  // regular micros
  delay(ms);
#endif
}

```

打印1，尚且不清楚不使用delay函数的原因，是他的精度不够高么