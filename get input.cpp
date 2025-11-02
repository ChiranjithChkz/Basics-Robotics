/**
 * //  Take an Input from Serial Monitor


   void setup()
    {
    Serial.begin(9600);
  }

  void loop()
   {
  //int a = Serial.parseInt();
  // float b = Serial.parseFloat();
  //char c = Serial.read();
  String d = Serial.readString();

  Serial.println(d);
  delay(1000);

}
 */