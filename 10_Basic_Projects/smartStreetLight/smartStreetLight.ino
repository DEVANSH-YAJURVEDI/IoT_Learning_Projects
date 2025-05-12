int ledPin=8;
int ldrPin=A0;
int threshold=500;
// Light level threshold (adjust if needed)

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int ldrValue=analogRead(ldrPin);
  if (ldrValue<threshold){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
  delay(200);
    

}
