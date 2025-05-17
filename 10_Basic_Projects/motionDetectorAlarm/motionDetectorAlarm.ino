const int pirPin = 10;         // PIR sensor output connected to digital pin 10
const int ledPin = 2;          // LED connected to digital pin 2

void setup() {
  pinMode(pirPin, INPUT);      // PIR sensor as input
  pinMode(ledPin, OUTPUT);     // LED as output
  Serial.begin(9600);          // For monitoring PIR status 
}

void loop() {
  int motionState = digitalRead(pirPin); // Read PIR sensor

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);          // Turn ON LED
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);           // Turn OFF LED
    Serial.println("No Motion Detected!");
  }
  delay(500); // Small delay to stabilize reading
}
