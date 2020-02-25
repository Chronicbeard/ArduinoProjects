/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
* 
* Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*
*/




// defines pins numbers
const int trigPin = 5;
const int echoPin = 4;

// defines variables
long duration;
int distance;

void setup() 
{
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}

void loop() 
{
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculating the distance
  distance= duration*0.034/2;
  
  //testing with conditional
  if (distance > 13)
  {
    //code to run lights or motor
    digitalWrite(13, HIGH);
  }
  else
  {
    //Other state
    digitalWrite(13, LOW);
  }
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}
