char val; // Data received from the serial port
int ledPin = 13; // Set the pin to digital I/O 13
boolean ledState = LOW; //to toggle our LED
int buttonPin = 8;



void setup() 
{
  pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
  pinMode(buttonPin, INPUT); // Set pin as INPUT
  //initialize serial communications at a 9600 baud rate
  Serial.begin(9600);
  establishContact();  // send a byte to establish contact until receiver responds 
}


void loop()
{
  if (Serial.available() > 0) { // If data is available to read,
    val = Serial.read(); // read it and store it in val

    if(val == '1') //if we get a 1
    {
       ledState = !ledState; //flip the ledState
       digitalWrite(ledPin, ledState); 
    }
    delay(100);
  } 
    else {
    Serial.println(digitalRead(buttonPin)); //send back button pin info
    delay(50);
    }
}

void establishContact() {
  while (Serial.available() <= 0) {
  Serial.println("A");   // send a capital A
  delay(300);
  }
}


