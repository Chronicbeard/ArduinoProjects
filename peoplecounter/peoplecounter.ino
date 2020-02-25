


#include <LiquidCrystal.h>
#define echoPin 2 // Echo Pin 1
#define trigPin 3 // Trigger Pin 1
#define echo2Pin 4 // Echo Pin 2
#define trig2Pin 5 // Trigger Pin 2

int maximumRange = 1000; // Maximum range needed

long duration, distance; // Duration used to calculate distance
long duration2, distance2; //duration used to calculate distance 2

int incrementState = 0; //variable that will read the increment button (either HIGH or LOW)
int decrementState = 0; //variable that will read the decrement button (either HIGH or LOW)

int counter = 0; //variable that will store the count

int lastIncrementState = 0;
int lastDecrementState = 0;

int currentState = 0;
int previousState = 0;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  Serial.begin(9600);
  //lcd.begin(5, 1);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trig2Pin, OUTPUT);
  pinMode(echo2Pin, INPUT);
}
void loop() {
 
//lcd.setCursor(0,0);
//lcd.print(counter  ); //print it on serial monitor
//Serial.println(counter);

   /* The following trigPin/echoPin cycles are used to determine the
  distance of the nearest object by bouncing soundwaves off of it.  THIS IS FOR THE FIRST SENSOR*/ 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(50); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  delayMicroseconds(60);
  //Calculate the distance (in cm) based on the speed of sound.
  distance = duration/58.2; 

  // getting distance2 for next sensor:
  digitalWrite(trig2Pin, LOW); 
  delayMicroseconds(50); 
  digitalWrite(trig2Pin, HIGH);
  delayMicroseconds(100); 
  digitalWrite(trig2Pin, LOW);
  duration2 = pulseIn(echo2Pin, HIGH);
  //Calculate the distance (in cm) based on the speed of sound.
  distance2 = duration2/58.2;

  //Print the distances / counter:
  Serial.print("distance 1 = ");
  Serial.print(distance);
  Serial.print("\t");
  Serial.print("\t");
  Serial.print("  distance 2 = ");
  Serial.print(distance2);
  Serial.print("\t");
  Serial.print("\t");
  Serial.println(counter);
    if(distance<70 && distance2 >70){
      counter += 1;
      delay(400);
    }


    if(distance>70 && distance2 < 70){
      counter -= 1;
      delay(400);
    }
    else{
      counter = counter;
    }

}

