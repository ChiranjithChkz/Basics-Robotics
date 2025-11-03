/**
 *
 *  //  Take an Input from Serial Monitor
    //   Largest Number among three numbers;

void setup()
{

   Serial.begin(9600);
}

void loop()
{
   int n1, n2, n3;
  n1=40;
  n2=20;
  n3=30;

  if(n1 > n2 && n1 > n3)
  {
    Serial.println(n1); Serial.print("is largest.");
  }
  if(n2 > n1 && n2 > n3)
  {
    Serial.println(n2); Serial.print("is largest.");
  }
  if(n3 > n2 && n3 > n1)
  {
    Serial.println(n3); Serial.print("is largest.");
  }


}
 */