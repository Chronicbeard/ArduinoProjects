int secondsToWait;
int startTime;
int endTime;

void setup() {
  // put your setup code here, to run once:
secondsToWait = 0;
startTime = 0;
randomSeed(millis());

pinMode(13, OUTPUT);
pinMode(10, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
secondsToWait = random((1), (10) + 1));
delay(secondsToWait * 1000);
digitalWrite(13, HIGH);
startTime = millis();

while (!(digitalRead(10))) {
  
}

endtime = millis();
digitalWrite(13, LOW);
Serial.print("Time");
Serial.print('\t');
Serial.print(endTime-startTime);
Serial.print('\t');
}
