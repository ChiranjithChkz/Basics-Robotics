/**
 * //  Take an Input from Serial Monitor
  //Infinitive For loop
  // Stop loop whenever you want

void setup()
{
  Serial.begin(9600);
    
  
  while(1)
  {
    Serial.println("Hello");
    if(Serial.read() == 'b'){ // get input from users
      break;
    }
  }
  Serial.println("Loop Broke");
}

    
void loop()
{
   
} 
 */