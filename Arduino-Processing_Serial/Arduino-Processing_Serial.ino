void setup() 
{
  //initialize serial communications at a 9600 baud rate
  Serial.begin(9600);
} // end setup


void loop()
{
  //send 'Hello, world!' over the serial port
  Serial.println("Hello, world!");
  //wait 100 milliseconds so we don't drive ourselves crazy
  delay(100);
} // end loop

