//using a potentiometer for a strobe light
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int redDial = A0;
int greenDial = A1;
int blueDial = A2;
int redval = 0;
int greenval = 0;
int blueval = 0;

//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  Serial.begin(9600);      // open the serial port at 9600 bps:
}

void loop()
{
  redval = analogRead(redDial);
  //greenval = analogRead(greenDial);
  //blueval = analogRead(blueDial);
  redval = map(redval,0,1024,0,255);
  greenval = map(greenval,0,1024,0,255);
  blueval = map(blueval,0,1024,0,255);
  //setColor(redval, greenval, blueval);  // all
  setColor(0, 255, 0);
  delay(redval);
  setColor(0, 0, 255);
  delay(redval);
  setColor(255, 0, 0);
  delay(redval);
  setColor(0, 255, 255);
  delay(redval);
  setColor(255, 0, 255);
  delay(redval);
  setColor(255, 255, 0);
  delay(redval);
    setColor(255, 255, 255);
  delay(redval);
    setColor(80, 0, 80);
  delay(redval);
    setColor(0, 80, 80);
  delay(redval);
    setColor(0, 20, 80);
  delay(redval);
    setColor(20, 80, 0);
  delay(redval);
 
  
  
  Serial.print("redval");       // prints a label
  Serial.print("\t");              // prints a tab

  Serial.print("greenval");  
  Serial.print("\t");      

  Serial.print("blueval"); 
  Serial.println("\t"); 
  
  Serial.print(redval); //prints value for red
  Serial.print("\t");
  Serial.print(greenval);
  Serial.print("\t");
  Serial.print(blueval);
  Serial.println("\t");
  delay(1000); 
  
  //Serial.print(" ");
}
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
