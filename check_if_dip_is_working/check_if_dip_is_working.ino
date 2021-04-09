const int switchPin = 8;
int val = 0;

void setup() 
{
  Serial.begin(9600);  /* initialise serial communication */
  pinMode(switchPin, INPUT);
}

void loop()
{
  val = digitalRead(switchPin);
  if(val == HIGH)
  { 
    Serial.println("ElectronicWings"); /* print Electronic Wings at new line per second */
    delay(1000);
  }
  else
  {
    Serial.println("ElectronicWings"); /* print Electronic Wings at new line per second */
  }
}
