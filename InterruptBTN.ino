//LED controlling using Interrupt
const int SW = 2;
const int LED = 13;
volatile bool LEDstate = 0;
void setup(){
  pinMode(SW, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(SW), ISR_SW, FALLING);
}
void loop(){
  digitalWrite(LED, LEDstate);
}
void ISR_SW(){
  LEDstate != LEDstate;
  delay(500);
}