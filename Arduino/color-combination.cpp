/**
 * 
 * 
 * // C++ code
//RGB LIGHT

int red=13, blue=12, green=11;

void setup()
{
 // pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
   yellow();
}

void rbgBlink(){
   digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
  
   digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
}

void grbBlink(){
   
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1);
  
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1);
  
   digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1);
}


void yellow()
{
  digitalWrite(blue, HIGH);
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(2000);
}
 */