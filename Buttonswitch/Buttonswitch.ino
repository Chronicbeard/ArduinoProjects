/* this code is used to connect a button switch to Analog ) to turn on a light and sound. 
Setup:
GND - 10K - button - Pos
Analog0 - button - pos
LED to pin 13.
Speaker to pin 11
*/

int sensorPin = A0;    // The potentiometer is connected to analog pin 0                  
int ledPin = 13;       // The LED is connected to digital pin 13
int sensorValue = 0;
int soundPin = 11;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(soundPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);  
    if(sensorValue > 500) {  
      tone(soundPin, 1000, 100);
      digitalWrite(ledPin, HIGH);
    } else {
      noTone(soundPin);
      digitalWrite(ledPin, LOW);      // Turn the LED off
    }
  Serial.println(sensorValue);
}
