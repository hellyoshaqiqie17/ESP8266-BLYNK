#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "w8G-Wm6NYLKxtd-srIdRLG5vsfCoa0-P";

char uuuusername[] = "DHD";
char sandi[] = "hesa1305";

void setup()
{

  Serial.begin(9600);

  Blynk.begin(auth, uuuusername, sandi);
}

void loop()
{
  Blynk.run();
}
