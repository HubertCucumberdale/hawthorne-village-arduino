#include <Arduino.h>

#include "pins.h"

/*
 * Lights are illuminated by setting the pin to LOW. Pins are used as sinks (grounded) and are
 * connected to the negative leg of the light. The positive leg of the light strings
 * are connected to the 5V pin on the Power supply.
 */
void illuminateLightGroup(int group[]) {
  int size = sizeof(group) / sizeof(group[0]);
  for (int i = 0; i < size; i++) {
    digitalWrite(group[i], LOW);
    delay(500);
    digitalWrite(group[i], LOW);
  }
}

void dimLightGroup(int group[]) {
  int size = sizeof(group) / sizeof(group[0]);
  for (int i = 0; i < size; i++) {
    digitalWrite(group[i], HIGH);
  }
}

void setup() {
  // Initialize the pins and turn all the lights off
  // TODO: this initializes only the pins used for the lights. Initialize any other pins we need to use here.
  for (int i = 23; i < 52; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on
  digitalWrite(BREAKOUT_PIN_10, HIGH);
  delay(500);                      // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off
  digitalWrite(BREAKOUT_PIN_10, LOW);
  delay(500);  // wait for half a second
}

// put function definitions here:
/* int myFunction(int x, int y) {
  return x + y;
} */