int timeDial = A0;
int timer = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins.
  pinMode(13, OUTPUT); pinMode(12, OUTPUT); pinMode(11, OUTPUT); pinMode(10, OUTPUT); pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);pinMode(7, OUTPUT);pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);pinMode(4, OUTPUT);pinMode(3, OUTPUT);pinMode(2, OUTPUT);pinMode(1, OUTPUT);pinMode(0, OUTPUT);;
  pinMode(A0, INPUT);
  
}

// the loop function runs over and over again forever
void loop () {
  
  timer = analogRead(timeDial)/6+5;
  for(int i = 0 ; i < 6 ; i++)
  {
  digitalWrite(i, HIGH);   
  delay(timer);
  }
  for(int i = 0 ; i <6 ; i++)
  {
  digitalWrite(i, LOW);   
  delay(timer);
  }
  if( analogRead(A1) < 400 )
  {
    digitalWrite(9,HIGH);
  } else {
    digitalWrite(9,HIGH);
  }
  }

}




