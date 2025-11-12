  // C++ code
// first Project: Automatic light on-off lamp post
// On when night, Off when day

int light = 9;  // define
void setup()
{
   Serial.begin(9600);
   pinMode(light, OUTPUT); // select mode
}

void loop()
{
  
  int resistance = analogRead(A0); //define
  Serial.println(resistance);
  
  
  //main condition
  if(resistance < 400)  
  {
    digitalWrite(light, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(light, LOW);
  }
}
