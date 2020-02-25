
// setup a variable for the potentiometer
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // read value from potentiometer and put in val
  
  val = analogRead(A0);
  
  digitalWrite(13,HIGH);
  delay(val);
  digitalWrite(13,LOW);
  delay(val);
}
