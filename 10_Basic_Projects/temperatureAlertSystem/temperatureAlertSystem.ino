const int tempSensorPin = A0;
const int buzzerPin = 9;
float temperature = 0.0;
const float threshold = 30.0;  // Temperature threshold in Celsius

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(tempSensorPin);
  temperature = (analogValue * 0.4798 - 48.95); // Convert analog to Celsius
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature > threshold) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}
