int blinkSpeed = 0;
int blinkVal = A0;


void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  blinkSpeed = analogRead(blinkVal);
  digitalWrite(13, HIGH);
  delay(blinkSpeed);
  digitalWrite(13,LOW);
  delay(blinkSpeed);
}

