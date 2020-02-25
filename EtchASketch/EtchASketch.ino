/*
   Etch-a-Sketch_wswitches

   A simple program to read two potentiometers connected to analog 0 and 1, interpret them as an ordered pair (x,y)
   and send them via serial to the computer

   based on Graph:  http://www.arduino.cc/en/Tutorial/Graph
   7/2011 - modified by cdubois
*/

#include <Stdio.h>

// for pots
int xCoord;
int yCoord;
char coords[10];

// for switches
// variables for input pin and control LED
// input 7 is to clear screen
// input 3 is to begin drawing again
// input 5 is to change color
int digitalInput3 = 3;  // draw
int digitalInput5 = 5;  // change color
int digitalInput7 = 7;  // clear
int LEDpin = 13;
// variable to store the value
int value3 = '0';
int value5 = '0';
int value7 = '0';



void setup()
{
  // declare pin modes

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(digitalInput7, OUTPUT);
  pinMode(LEDpin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // read the value on digital input
  value3 = digitalRead(3);

  // write this value to the control LED pin
  digitalWrite(LEDpin, value3);

  // switch to draw  is checked
  // if the value6 is high then send the letter "Y" else send "N"
  // Serial.print(value3);
  if (value3 ) {
    Serial.print("Y," );
  }
  else
  {
    Serial.print("N," );
  }


  // switch to change color  is checked
  // if the value6 is high then send the letter "E" else send "N"

  value5 = digitalRead(5);
  if (value5 ) {
    Serial.print("E," );
  }
  else
  {
    Serial.print("N," );
  }

  value7 = digitalRead(7);
  // switch to clear screen is checked
  // Serial.print (value7);
  if (value7  ) {
    Serial.print("C," );
  }
  else
  {
    Serial.print("L," );
  }


  xCoord = analogRead(A0);
  yCoord = analogRead(A1);
  map(xCoord, 0, 1023, 0, 1400);
  map(yCoord, 0, 850, 0, 1400);
  sprintf(coords, "%d,%d", xCoord, yCoord);
  Serial.println(coords);


  //  delay(5);

}
