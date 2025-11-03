/**
 * //  Take an Input from Serial Monitor
// for-Loop
// Print odd-numbers 

void setup()
{
  
   Serial.begin(9600);
    for(int i=1; i<=100; i++)
    {
       if(i % 2 == 1)
       {
         Serial.println(i);
       }
    }
}

void loop()
{
   
}
 */