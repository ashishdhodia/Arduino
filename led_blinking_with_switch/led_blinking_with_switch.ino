const int BUTTON2 = 2;
const int BUTTON4 = 4;
const int LED = 3;
int BUTTONstate2 = 0;
int BUTTONstate4 = 0;

void setup()
{
  pinMode(BUTTON2, INPUT);
  pinMode(BUTTON4, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate2 = digitalRead(BUTTON2);
  BUTTONstate4 = digitalRead(BUTTON4);
  if (BUTTONstate2 == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  } 
  else if (BUTTONstate4 == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(LED, LOW);
    delay(50);
  } 
  else{
    digitalWrite(LED, HIGH);
  }
}
