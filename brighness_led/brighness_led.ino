const int BUTTON = 5;
const int LED = 6;
int BUTTONstate = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON);
  if (BUTTONstate == HIGH)
  {
    for(int i = 0; i <= 255; i++)
      {
        analogWrite(LED, i);
        delay(15);
      }
      for(int j = 255; j >= 0; j--)
      {
        analogWrite(LED, j);
        delay(15);
      }  
   } 
  else{
    digitalWrite(LED, LOW);
  }
}
