// C++ code
//


#include<Servo.h>
Servo myservo;

int distance_function(int echo, int triggar);

int echo=5;
int trigger=4;

void setup()
{
  Serial.begin(9600);
   myservo.attach(7);
   pinMode(echo, INPUT);
   pinMode(trigger, OUTPUT);
}

void loop()
{
  
   //conditions------->
   
  if(distance_function(echo, trigger) < 30)
  {
   myservo.write(90);
    delay(2000);
  }
  else{
    myservo.write(0);
  }
}

// main setup------>

int distance_function(int echo, int triggar)
{
  digitalWrite(trigger, LOW);
  delay(2);
  digitalWrite(trigger,HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  int duration = pulseIn(echo, HIGH); //time calculate
  
  
  int distance = (0.034* duration)/2; // v = 0.034
  return distance;
}