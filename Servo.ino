#include<Sevo.h>
Servo s;
void setup() {
  s.attach(9);
  pinMode(9, OUPUT);
}
void loop() {
  for(int i=0; i<=180; i+=10){
    s.write(i);
    delay(500);
  }
  for(int i=180; i>0; i-=10){
    s.write(i);
    delay(500);
  }
}
