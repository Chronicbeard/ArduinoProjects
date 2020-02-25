/*Adjustable Twin LED Flasher

Flshing LED's with the changes in the potentiometer.
*/
int led = 9;
int PotIn = A0;
int Flash;

void setup() {
  pinMode (led, OUTPUT);
  pinMode(PotIn, INPUT);

}

void loop() {
  Flash = analogRead(PotIn);
  digitalWrite(led, HIGH);
  delay(Flash);
  digitalWrite(led, LOW);
  delay(Flash);

}
