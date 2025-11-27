//Sensing Temperature using temp sensor LM35
const int sensorpin = A0;
int sensorvalue, temp;
void setup(){
	Serial.begin(9600);
}
void loop(){
	sensorvalue = analogRead(A0);
  	temp = sensorvalue/2;
  	Serial.print("Temp: ");
    Serial.println(temp);
}