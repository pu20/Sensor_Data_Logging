int i = 0;
int sensorPin = A0;   // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
float EC_val = 0.0;

void setup() {
  //Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  EC_val = (5.0 / 1023.0) * sensorValue;
  Serial.print(EC_val);
  delay(2000);
}
