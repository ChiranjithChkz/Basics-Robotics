 
int relay = 8; //1
int pir = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(relay, OUTPUT); //2
  pinMode(pir, INPUT);
}

void loop()
{
  if(digitalRead(pir) == HIGH){
    Serial.println("Motion Detected");
    digitalWrite(relay, HIGH);
    
  }
  else{
   Serial.println("No motion detected");
    digitalWrite(relay, LOW);
  }
}