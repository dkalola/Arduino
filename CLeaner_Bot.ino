int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // H bridge 1     RIGHT              MOTOR 1
  pinMode(3, OUTPUT);// H bridge 1 Backward
  pinMode(4, OUTPUT);// H bridge 2      LEFT              MOTOR 2
  pinMode(5, OUTPUT);// H bridge 2 Backward
  pinMode(6, OUTPUT);// Common Wire for both motors (With diods for no return current)
}

int Speed = 1000;
int Stop = 500;
void loop() {
  // put your main code here, to run repeatedly:
  ultraSonic();
  if(distance > 100){
    digitalWrite(2 && 4,LOW);
    delay(Stop);
    digitalWrite(3 && 5,HIGH);
    delay(Speed);             // MOVES BACK
    digitalWrite(3 && 5,LOW);
    delay(Stop);
    while(distance < 1000){
      digitalWrite(2, HIGH);
      }
      digitalWrite(2, LOW);
      delay(5);
    
  }
  else{
    while(distance < 1000){
      digitalWrite(2 && 4,HIGH);
      }
    
    }

}


void ultraSonic(){
  
}

