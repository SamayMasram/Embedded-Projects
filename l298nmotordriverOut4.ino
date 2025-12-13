// L298N Motor Driver Pins for Motor B (no PWM control)
const int IN3 = 10;
const int IN4 = 11;

void setup() {
  // Set direction control pins as outputs
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Move motor forward (full speed)
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(2000); // Run for 2 seconds

  // Stop motor
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);

  // Move motor backward (full speed)
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);

  // Stop motor
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);
}
