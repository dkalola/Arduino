#include <RFID.h>
#include <SPI.h>
#include <RFID.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


#define SDA_DIO 9
#define RESET_DIO 8

RFID RC522(SDA_DIO, RESET_DIO); 

void setup()
{ 
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

  SPI.begin(); 
 
  RC522.init();
}
int number;
void loop()
{
   

  if (RC522.isCard())
  {
   
    RC522.readCardSerial();
    Serial.println("Card detected:");
    for(int i=0;i<5;i++)
    {
    Serial.println(RC522.serNum[i],DEC);
    }

    
     if(RC522.serNum[0]== 69 && RC522.serNum[1] == 148 && RC522.serNum[2] == 24 && RC522.serNum[3] == 119 && RC522.serNum[4] == 190){
      Serial.println(" hi");
    
      lcd.begin(16, 2);
   
      lcd.print("Welcome ");
       lcd.setCursor(0, 1);
       lcd.print("Chirag Sir");
      Serial.println("Welcome :)");


     digitalWrite(7, HIGH);
      delay(1000);
      
      }
          
     if(RC522.serNum[0]== 16 && RC522.serNum[1] == 122 && RC522.serNum[2] == 70 && RC522.serNum[3] == 213 && RC522.serNum[4] == 249){
      Serial.println(" hi");
      
      lcd.begin(16, 2);
     
      lcd.print("Welcome ");
       lcd.setCursor(0, 1);
       lcd.print("Kiran Sir");
      Serial.println("Welcome :)");

     digitalWrite(7, HIGH);
      delay(1000);
      
      }
      else{}
       
  }
  else{
    Serial.println("Card undetected");
    lcd.begin(16, 2);
   lcd.print("Please Confirm your");
   lcd.setCursor(0, 1);
    lcd.print("ID Card !!");
    }
  delay(1000);
}
