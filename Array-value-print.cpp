/**
 * //  Take an Input from Serial Monitor
 //Infinitive For loop

void setup()
{
  Serial.begin(9600);
     
  int array[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++)
  {
    Serial.println(array[i]);
  }
}

    
void loop()
{
   
}
 */