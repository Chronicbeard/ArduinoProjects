int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(9,HIGH);
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  Serial.println(val);
}
