/*// Take an Input from Serial Monitor
// Using a Class in Arduino

class Calculation {
  int a, b, c;

public:
  void set(int n1, int n2, int n3) {
    a = n1;
    b = n2;
    c = n3;
  }

  void sum() {
    Serial.print("Sum: ");
    Serial.println(a + b + c);
  }

  void multiply() {
    Serial.print("Multiplication: ");
    Serial.println(a * b * c);
  }

  void largestNumber() {
    Serial.print("Largest number: ");
    if (a > b && a > c) {
      Serial.println(a);
    } else if (b > a && b > c) {
      Serial.println(b);
    } else {
      Serial.println(c);
    }
  }
};

Calculation calc;  // create object globally

void setup() {
  Serial.begin(9600);
  calc.set(10, 20, 30);
  calc.sum();
  calc.multiply();
  calc.largestNumber();
}

void loop() {
  // Empty loop
}*/




 
 