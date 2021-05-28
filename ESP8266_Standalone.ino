

 *************************************************************
  

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "Enter Auth Token";


char ssid[] = " //Your WiFi credentials ";
char pass[] = "// Set password to wifi";

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt(); 
  analogWrite(D1, pinValue);
  Blynk.virtualWrite(V1, pinValue);
  Serial.print("V0 Slider value is: ");
  Serial.println(pinValue);
}
void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
