/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
#define BLINK_GPIO 21
#define BLINK_PERIOD 1000

void setup()
{
  Serial.begin(115200);
  // initialize LED digital pin as an output.
  pinMode(BLINK_GPIO, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  Serial.println("Turning off the LED");
  digitalWrite(BLINK_GPIO, HIGH);
  delay(BLINK_PERIOD);
  // turn the LED off by making the voltage LOW
  Serial.println("Turning on the LED");
  digitalWrite(BLINK_GPIO, LOW);
  delay(BLINK_PERIOD);
}
