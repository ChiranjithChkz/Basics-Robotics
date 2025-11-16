
//Right  motor: Ren 10, Len 11, Rpwm 5, Lpwm 6
// Left Motor: Ren 7, Len 8, Rpwm 9, Lpwm 10


int speeds = 50;
char data;  // bluetooth signal

// for right side
#define rm_ren 10
#define rm_len 11
#define rm_rpwm 5
#define rm_lpwm 6

// for right side
#define lm_ren 7
#define lm_len 8
#define lm_rpwm 9
#define lm_lpwm 10

void forward();
void backward();
void turnRight();
void turnLeft();
void stopFunction();

void setup() {
  // put your setup code here, to run once:
  pinMode(rm_ren, OUTPUT);
  pinMode(rm_len, OUTPUT);
  pinMode(rm_rpwm, OUTPUT);
  pinMode(rm_lpwm, OUTPUT);


  pinMode(lm_ren, OUTPUT);
  pinMode(lm_len, OUTPUT);
  pinMode(lm_rpwm, OUTPUT);
  pinMode(lm_lpwm, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // forward();delay(2000);
  //   stopFunction();delay(2000);
  // backward(); delay(2000);
  //   stopFunction();delay(2000);
  // turnRight();delay(2000);
  //   stopFunction();delay(2000);
  // turnLeft();delay(3000);
  //   stopFunction();delay(2000);


  //control by bluetooth
  if (Serial.available()) {  //---avoiding garbage value
    data = Serial.read();
    // Serial.println(data);
 
    if(data == '0' || data == '1' || data == '3' || data == '4' || data == '5' || data == '6' || data == '7' || data == '8' || data == '9')
    {
    int value = (int)data; 
    speeds = value* 28; // 255/9=28, 9*28=252, hole motor speed max
  }

    if (data == 'F') {
      forward();
      Serial.print("F");
    }
    if (data == 'B') {
      backward();
      Serial.print("B");
    }
    if (data == 'R') {
      turnRight();
      Serial.print("R");
    }
    if (data == 'L') {
      turnLeft();
      Serial.print("L");
    }
    if (data == 'S') {
      stopFunction();
      Serial.print("S");
    }

    Serial.println( );
  }
}

void forward() {

  //For the right wheels
  digitalWrite(rm_ren, HIGH);
    digitalWrite(rm_len, HIGH);
      digitalWrite(rm_rwpm, speeds);
        digitalWrite(rm_lwpm, 0);

    // For the left wheels
    digitalWrite(lm_ren, HIGH);
      digitalWrite(lm_len, HIGH);
        digitalWrite(lm_rwpm, speeds);
          digitalWrite(lm_lwpm, 0);
}
void backward() {

  //For the right wheels
  digitalWrite(rm_ren, HIGH);
    digitalWrite(rm_len, HIGH);
      digitalWrite(rm_rwpm, 0);  // direction changed
    digitalWrite(rm_lwpm, speeds);

    // For the left wheels
    digitalWrite(lm_ren, HIGH);
      digitalWrite(lm_len, HIGH);
        digitalWrite(lm_rwpm, 0);  // direction changed
    digitalWrite(lm_lwpm, speeds);
}
void turnRight() {

  //For the right wheels
  digitalWrite(rm_ren, HIGH);
    digitalWrite(rm_len, HIGH);
      digitalWrite(rm_rwpm, 0);  // direction changed
    digitalWrite(rm_lwpm, speeds);

    // For the left wheels
    digitalWrite(lm_ren, HIGH);
      digitalWrite(lm_len, HIGH);
        digitalWrite(lm_rwpm, speeds);  // direction changed
    digitalWrite(lm_lwpm, 0);
}
void turnLeft() {

  //For the right wheels
  digitalWrite(rm_ren, HIGH);
    digitalWrite(rm_len, HIGH);
      digitalWrite(rm_rwpm, speeds);  // direction changed
    digitalWrite(rm_lwpm, 0);

    // For the left wheels
    digitalWrite(lm_ren, HIGH);
      digitalWrite(lm_len, HIGH);
        digitalWrite(lm_rwpm, 0);// direction changed
    digitalWrite(lm_lwpm, speeds);
}

// for stopping robot

void stopFunction() {
  //For the right wheels
  digitalWrite(rm_ren, LOW);
  digitalWrite(rm_len, LOW);
  // For the left wheels
  digitalWrite(lm_ren, LOW);
  digitalWrite(lm_len, LOW);
}
