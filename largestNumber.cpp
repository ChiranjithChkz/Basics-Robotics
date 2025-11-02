/**
 * //  Take an Input from Serial Monitor
//   Largest Number between 2 numbers;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
   if(Serial.available()> 0)
   {
       int number1 = Serial.parseInt(); // get input number from users
       int number2 = Serial.parseInt(); // same here


         Serial.println("1st number: ");
         Serial.println(number1);
         Serial.print("2nd number: ");
         Serial.println(number2);

     if(number1 > number2)
         {
           Serial.println(number1);
           Serial.print("Number1 is Largest");
         }
     else{
           Serial.println(number2);
           Serial.println("Number2 is Largest ");
                delay(1000);
        }
   }

}
 */