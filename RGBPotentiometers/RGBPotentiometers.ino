// Classroom introduction.

// initialize variables I will need
int red = 11; // red pin
int green = 10; // green pin
int blue = 9; // blue pin
int redSen  = A0; // red sensor
int greenSen = A1; // green sensor
int blueSen = A2; // blue sensor
int redVal = 0; // red value
int greenVal = 0; // greenvalue
int blueVal = 0; // blue value


// the setup routine runs once when you press reset:
void setup()
{
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // print headers
  Serial.println( "redValue"  "\t"  "greenValue" "\t"  "blueValue");
  // initialize each pin as an oputput.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
} // end setup

// the loop routine runs over and over again forever:
void loop()
{
  // read the input on analog pin for each color and set value:
  int redVal = analogRead( redSen );
  int greenVal = analogRead( greenSen );
  int blueVal = analogRead( blueSen );
  // print out the value you read:
  Serial.print( redVal);
  Serial.print( "\t" );
  Serial.print( greenVal);
  Serial.print( "\t" );
  Serial.println( blueVal);
  analogWrite(red, (redVal / 4 +1) );
  analogWrite(green, (greenVal / 4 +1) );
  analogWrite(blue, (blueVal / 4 +1) );

} // end loop
