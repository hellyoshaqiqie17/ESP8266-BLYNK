#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "token PADA BLYNK";

char uuuusername[] = "username kamu";
char sandi[] = "password kamu";

void setup()
{

  Serial.begin(9600);

  Blynk.begin(auth, uuuusername, sandi);
}

void loop()
{
  Blynk.run();
}
