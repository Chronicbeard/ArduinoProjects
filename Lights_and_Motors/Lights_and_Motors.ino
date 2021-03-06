/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo




void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(10, OUTPUT);

}

void loop() {

  myservo.write(0);                  // sets the servo position according to the scaled value
  delay(1000);                           // waits for the servo to get there
    myservo.write(180);                  // sets the servo position according to the scaled value
  delay(1000); 
    myservo.write(90);                  // sets the servo position according to the scaled value
  delay(1000); 
    myservo.write(100);                  // sets the servo position according to the scaled value
    digitalWrite(10, HIGH);
  delay(1000); 
    digitalWrite(10, LOW);
    delay(100);
    digitalWrite(10, HIGH);
    delay(1000); 
    digitalWrite(10, LOW);
    delay(100);
    digitalWrite(10, HIGH);
    delay(1000); 
    digitalWrite(10, LOW);
    delay(100);
    digitalWrite(10, HIGH);
    delay(1000); 
    digitalWrite(10, LOW);
      delay(100);
        digitalWrite(10, HIGH);
  delay(100); 
    digitalWrite(10, LOW);
  
}

