// Blinking On-board LED on Arduino UNO board
void setup(){
  pinMode(13, OUTPUT);
}
void loop(){
  digitalWrite(13, HIGH);
  delay(1000);   
  digitalWrite(13, LOW);
  delay(1000); 
}
