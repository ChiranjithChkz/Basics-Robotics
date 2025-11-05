/**
 * //String: a collection of char:
// Class
//all about strings

void setup() {
  Serial.begin(9600);
  String s1 ="Hello World";
  
  // find the length---------->
  int len=s1.length();
  Serial.println(len);
 
  //find the character------------>
  char character = s1.charAt(4);
  Serial.println(character);
  
  //find the subString--------->
  String subString = s1.substring(4,10);
  Serial.println(subString);
  
  //connect two string
  String in= "12345" , out="abcd";
  String sum = in + out;
  Serial.println(sum);
  
  //convert string to int--------->
  String num1 = "5", num2="15";
  int intNum1= num1.toInt();
  int intNum2= num2.toInt();
  Serial.println(intNum1+intNum2);
  
  s1.toUpperCase();
  s1.toLowerCase();
  Serial.println(s1);
}



void loop() {
 
}


 
 
 */