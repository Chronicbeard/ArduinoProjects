
#define trig1Pin 3
#define echo1Pin 2
#define trig2Pin 5
#define echo2Pin 4
long count = 0;

void setup() {
  Serial.begin (9600);
  pinMode(trig1Pin, OUTPUT);
  pinMode(echo1Pin, INPUT);
  pinMode(trig2Pin, OUTPUT);
  pinMode(echo2Pin, INPUT);

}

void loop() {
  long duration, distance;
  //long duration2, distance2;
  digitalWrite(trig1Pin, LOW);  // send low signal
  delayMicroseconds(2); // wait
  digitalWrite(trig1Pin, HIGH); //send high signal
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trig1Pin, LOW);
  duration = pulseIn(echo1Pin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 10) {  // if the distance is less than 10 cm..
    digitalWrite(13,HIGH); // turn on light
    Serial.println("person entered");
 
}
  else {
    digitalWrite(13,LOW);

  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
