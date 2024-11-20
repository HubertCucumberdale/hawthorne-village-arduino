#include <Arduino.h>
#include "pins.h"



void setup() {
  // put your setup code here, to run once:
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(BREAKOUT_PIN_10, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on
  digitalWrite(BREAKOUT_PIN_10, HIGH);
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off
  digitalWrite(BREAKOUT_PIN_10, LOW);
  delay(500);                       // wait for half a second
}

// put function definitions here:
/* int myFunction(int x, int y) {
  return x + y;
} */