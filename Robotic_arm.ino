/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;// create servo object to control a servo

int servo1 = 0; // Analog pin 0 From Potential meter 
int servo2 = 1; // Analog pin 1 From Potential meter
int servo3 = 2; // Analog pin 2 From Potential meter
int servo4 = 3; // Analog pin 3 From Potential meter
int servo5 = 4; // Analog pin 0 From Potential meter

int val;

void setup() {
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
   myservo2.attach(7); // attaches the servo on pin 7 to the servo object
    myservo3.attach(6); // attaches the servo on pin 6 to the servo object
     myservo4.attach(5); // attaches the servo on pin 5 to the servo object
      myservo5.attach(4);// attaches the servo on pin 4 to the servo object
  Serial.begin(9600);
  
    pinMode(1, OUTPUT); // LED PIN 1
      pinMode(2, OUTPUT);// LED PIN 2
        pinMode(3, OUTPUT);// LED PIN 3
          pinMode(4, OUTPUT);// LED PIN 4
            pinMode(5, OUTPUT);// LED PIN 5
              pinMode(8, OUTPUT);// LED PIN 8 Red Means all of the servo are off
}
int x[7];
int y;
void loop() {
  
   if(analogRead(0) < 950 ){
    First();
    digitalWrite(1, HIGH);
    digitalWrite(8, LOW);
   }
   else{
     if(analogRead(1) < 950 ){
    Second();
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
   }
   else{
     if(analogRead(2) < 950 ){
    Third();
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
   }
   else{
     if(analogRead(3) < 950 ){
    Forth();
    digitalWrite(4, HIGH);
    digitalWrite(8, LOW);
   }
   else{
     if(analogRead(4) < 950 ){
    Fifth();
    digitalWrite(5, HIGH);
    digitalWrite(8, LOW);
   }
   else{
      digitalWrite(8, HIGH);
    }
    }
    }
    }
    }
}

void First(){
   val = analogRead(servo1); 
   Serial.println(val) ;  
  // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(5);
}

void Second(){
   val = analogRead(servo2);   
Serial.println(val) ;
  // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo2.write(val);                  // sets the servo position according to the scaled value
  delay(5);
}
void Third(){
   val = analogRead(servo3);   
Serial.println(val) ;
  // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo3.write(val);                  // sets the servo position according to the scaled value
  delay(5);
}
void Forth(){
   val = analogRead(servo4);   
Serial.println(val) ;
  // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo4.write(val);                  // sets the servo position according to the scaled value
  delay(5);
}
void Fifth(){
   val = analogRead(servo5);   
Serial.println(val) ;
  // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo5.write(val);                  // sets the servo position according to the scaled value
  delay(5);
}
