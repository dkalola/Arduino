void setup() {
  // put your setup code here, to run once:
   pinMode(0, OUTPUT);
   pinMode(1, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
  
}

int x = 200;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(0, HIGH);
     digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(0, LOW);
  delay(x);

 digitalWrite(1, HIGH);
      digitalWrite(0, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(1, LOW);
  delay(x);

 digitalWrite(2, HIGH);
     digitalWrite(1, HIGH);  digitalWrite(0, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(2, LOW);
  delay(x);
  
  digitalWrite(3, HIGH);
      digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(0, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(3, LOW);
  delay(x);

  digitalWrite(4, HIGH);
     digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(0, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(4, LOW);
  delay(x);

 digitalWrite(5, HIGH);
     digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(0, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(5, LOW);
  delay(x);

 digitalWrite(6, HIGH);
     digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(0, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(6, LOW);
  delay(x);
  
  digitalWrite(7, HIGH);
      digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(0, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(7, LOW);
  delay(x);

  
  digitalWrite(8, HIGH);
      digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(0, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(8, LOW);
  delay(x);

 digitalWrite(9, HIGH);
      digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(0, HIGH);digitalWrite(10, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(9, LOW);
  delay(x);

 digitalWrite(10, HIGH);
      digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(0, HIGH);digitalWrite(11, HIGH);
  delay(5);
  digitalWrite(10, LOW);
  delay(x);

  
  digitalWrite(11, HIGH);
      digitalWrite(1, HIGH);  digitalWrite(2, HIGH);  digitalWrite(3, HIGH);  digitalWrite(4, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(7, HIGH);digitalWrite(8, HIGH); digitalWrite(9, HIGH);digitalWrite(10, HIGH);digitalWrite(0, HIGH);
  delay(5);
  digitalWrite(11, LOW);
  delay(x);



 
}
