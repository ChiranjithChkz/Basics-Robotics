/**
 * //  Take an Input from Serial Monitor
   // for-Loop
   // Print those number which divisible by 7 among 100-500

void setup()
{
  
   Serial.begin(9600);
  int count=0;
    for(int i=100; i<=500; i++)
    {
       if(i % 7 == 0)
       {
         Serial.println(i);
         count++;

       }
        }
    Serial.println("Total number: "); Serial.println(count);
}

    
void loop()
{
   
}
 */