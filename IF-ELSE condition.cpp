/**
 * //  Take an Input from Serial Monitor
  //  IF-ELSE  Conditional Statement

void setup()
{
  Serial.begin(9600);

}

void loop()
{
   if(Serial.available()> 0) //--------------->
   {
          char data = Serial.read();
         if(data == 'r' || data == 'R')  //------------condition;
             {
                 Serial.println("Today is Rainy day");
             }
         else{
                Serial.println("Today is Sunny day");
             }
                 delay(1000);
   }

}
 */