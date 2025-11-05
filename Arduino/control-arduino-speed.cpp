/**
 * // C++ code
//MOTOR SPEED CONTROL 

int p=10, n=11;


void setup()
{
  pinMode(p, OUTPUT);
  pinMode(n, OUTPUT);
}

void loop()
{
   analogWrite(p, 255);// 255 output voltage maximum
   analogWrite(n, 0);
    delay(2000);
   analogWrite(p, 0);// 255 output voltage maximum
   analogWrite(n, 120);
  delay(2000);
}
 */