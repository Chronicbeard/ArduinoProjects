// ben's program for blinking.

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //Make pin 13 an output pin.
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // turn on 13
  delay(100); // wait for 1/10 of a second.
  digitalWrite(13, LOW); // turn off 13
  delay(100); // wait 1/10 of a second.
  
}
