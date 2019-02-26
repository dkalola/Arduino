int count = 0;
void setup()
{
  Serial.begin(9600);
}
int value;
void loop()
{
  value = analogRead(1);
  Serial.println(value);
  delay(100);
}
