int relay1 = 7;
int relay2 = 8;
char data = 0;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  digitalWrite(relay1, HIGH);  // Relay OFF initially
  digitalWrite(relay2, HIGH);  // Relay OFF initially

  Serial.begin(9600); // This now talks to Bluetooth via pins 0 and 1
  // Make sure Bluetooth module is connected AFTER uploading
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(relay1, LOW); // Relay ON (Active LOW)
      Serial.println("Relay 1 ON");
    }
    else if (data == '2') {
      digitalWrite(relay1, HIGH); // Relay OFF
      Serial.println("Relay 1 OFF");
    }
    else if (data == '3') {
      digitalWrite(relay2, LOW); // Relay ON
      Serial.println("Relay 2 ON");
    }
    else if (data == '4') {
      digitalWrite(relay2, HIGH); // Relay OFF
      Serial.println("Relay 2 OFF");
    }
    else {
      Serial.println("Invalid command");
    }
  }
}
