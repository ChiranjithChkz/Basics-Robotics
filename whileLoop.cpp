/**
 * //  Take an Input from Serial Monitor
   //Infinitive For loop

void setup()
{
  Serial.begin(9600);
    
  int z=1;
  while(z <100)
  {
    if(z %2 ==0)
    {
      Serial.println(z);
                   
    
    }
    z++;
  }
}

    
void loop()
{
   
}
 */