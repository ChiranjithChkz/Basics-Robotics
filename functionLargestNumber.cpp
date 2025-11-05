/**
 *  //  Take an Input from Serial Monitor
 // function

void setup()
{
  Serial.begin(9600);
   int a=greatest(5,6, 7);
   Serial.print(a); Serial.print("is largest.");
 
}

    
void loop()
{
   
}

int greatest(int n1, int n2, int n3){
  
    if(n1 > n2 && n1 > n3)
  {
    return n1;
  }
  if(n2 > n1 && n2 > n3)
  {
    return n2;
  }
  if(n3 > n2 && n3 > n1)
  {
    return n3;
  }
}
 */