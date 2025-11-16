
    //  Take an Input from Serial Monitor
    //Infinitive For loop

void setup()
{
  Serial.begin(9600);
    
  
  while(1)
  {
   if(Serial.read() == 's')
   {
       while(1)
             {
                 Serial.println("Hello");
                 if(Serial.read() == 'b')
                      { // get input from users
                           break;
                      }
               }
          Serial.println("Loop Broken");
     }
   
  }
}
 