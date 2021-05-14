#include <Arduino.h>

#define SERIAL_BAUDS 115200

#ifndef LED_BUILTIN
  #define LED_BUILTIN PC13
#endif

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(SERIAL_BAUDS);

}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED on");
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED off");
   // wait for a second
  delay(1000);
}
