//Program for finding distance using Ultrasonic sensor
unsigned int duration, distance;
const int TRIG = 5;
const int ECHO = 6;
void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1000);
  digitalWrite(TRIG, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm\n");
}
