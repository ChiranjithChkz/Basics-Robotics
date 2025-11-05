/**
 * //  Take an Input from Serial Monitor
   // 2d array

void setup()
{
  Serial.begin(9600);
  char array[3][4]={
    {'a', 'b', 'c', 'd'},
    {'s','d','f', 'h'},
    {'e', 'r','r','t'}
                   };
  
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
  {
      Serial.print(array[i][j]);
                Serial.print(" ");
                }
                Serial.print("\n");
                }
}

    
void loop()
{
   
}
 */