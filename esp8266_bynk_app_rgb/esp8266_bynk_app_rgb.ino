#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "E7qlu5f3HiR_dmoSete9ZvcDTHI0mdie";  //Authentication Code sent by Blynk to Mail ID

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, "Free", "12345678");  //WIFI Name and Password
}

void loop()
{
  Blynk.run();
}
