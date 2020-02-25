int lightValue;
int sound;

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  lightValue = 0;
}

void loop() 
{
  lightValue = analogRead(A0);
  digitalWrite( 2 , LOW );
  digitalWrite( 3 , LOW );
  digitalWrite( 4 , LOW );
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , LOW );
  digitalWrite( 7 , LOW );
  if ( lightValue  <  675 ) 
  {
    digitalWrite( 2 , HIGH );
  }
  else if ( lightValue  <  700 )
  {
    digitalWrite( 3 , HIGH );
  }
    else if ( lightValue  <  750 )
  {
    digitalWrite( 4 , HIGH );
  }
    else if ( lightValue  <  800 )
  {
    digitalWrite( 5 , HIGH );
  }
    else if ( lightValue  <  850 )
  {
    digitalWrite( 6 , HIGH );
  }
  else 
  {
    digitalWrite( 7 , HIGH );
  }

  //makesound
  sound = map(lightValue, 600,900,200,1000);
  tone(11, sound);
  
  Serial.print( "light =" );
  Serial.print( lightValue);
  Serial.println("");
}
