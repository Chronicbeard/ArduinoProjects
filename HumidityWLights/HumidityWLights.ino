/* 
 HTU21D Humidity Sensor Example Code with lights
 By Ben Smith
 Originally from Nathan Seidle
 SparkFun Electronics
 Date: September 15th, 2013 - Updated Feb 13, 2015
 License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).
 
 Uses the HTU21D library to display the current humidity and temperature
 
 Open serial monitor at 9600 baud to see readings. Errors 998 if not sensor is detected. Error 999 if CRC is bad.
  
 Hardware Connections (Breakoutboard to Arduino):
 -VCC = 3.3V
 -GND = GND
 -SDA = A4 (use inline 330 ohm resistor if your board is 5V)
 -SCL = A5 (use inline 330 ohm resistor if your board is 5V)

 */

#include <Wire.h>
#include "HTU21D.h"

//Create an instance of the object
HTU21D myHumidity;
//lights added
int ledA = 10;
int ledB = 11;
int ledC = 12;
void setup()
{
  Serial.begin(9600);
  Serial.println("HTU21D Example!");

  myHumidity.begin();
  
  pinMode(ledA, OUTPUT); 
  pinMode(ledB, OUTPUT); 
  pinMode(ledC, OUTPUT); 
}

void loop()
{
  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();

  Serial.print("Time:");
  Serial.print(millis());
  Serial.print(" Temperature:");
  Serial.print(temp, 1);
  Serial.print("C");
  Serial.print(" Humidity:");
  Serial.print(humd, 1);
  Serial.print("%");

  Serial.println();
  delay(1000);
  
    if(humd > 0 && humd <= 33){ //Humidity between 0-33%

      digitalWrite(ledA, HIGH);
      digitalWrite(ledB, LOW);
      digitalWrite(ledC, LOW);

  }else if(humd >= 33 && humd <= 45){ //Humidity between 34-66%

      digitalWrite(ledB, HIGH);
      digitalWrite(ledC, LOW);
      digitalWrite(ledA, LOW);

  }else if(humd >= 46 && humd <= 100){ //Humidity between 67-100%

      digitalWrite(ledC, HIGH);
      digitalWrite(ledA, LOW);
      digitalWrite(ledB, LOW);
  }
}
