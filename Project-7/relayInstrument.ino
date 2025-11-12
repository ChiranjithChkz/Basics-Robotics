//String: a collection of char:
// use of relay , voltage instruments

int relay_pin = 7;
void setup() {
   pinMode(relay_pin, OUTPUT);
}



void loop() {
 
   digitalWrite(relay_pin,HIGH);
   delay(1000);
   digitalWrite(relay_pin,LOW);
   delay(1000);
}