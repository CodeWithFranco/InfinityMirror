#include <FastLED.h>
#include "turnONColor_CP1.h";
#include "runningLed.h";
#include "cp3RunningCode.h";

#define DATA_PIN_1 3
#define DATA_PIN_2 5
#define DATA_PIN_3 7
#define CP1 112                  // Total number of LEDs in your setup
#define CP2 63
#define CP3 64

CRGB leds1[CP1]; // LED array for first pin
CRGB leds2[CP2]; // LED array for second pin
CRGB leds3[CP3]; 

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN_1, RGB>(leds1, CP1);
  FastLED.addLeds<WS2811, DATA_PIN_2, RGB>(leds2, CP2);
  FastLED.addLeds<WS2811, DATA_PIN_3, RGB>(leds3, CP3);
}

void loop() {
 TurnONColor_CP1(leds1, CP1);
 RunningLed_red(leds1, CP1);
 RunningLed_blue(leds2, CP2);
 CP3RunningCode(leds3, CP3);
}

/***************************
CRGB* leds
CRGB*: This declares a pointer to a CRGB object (or an array of CRGB objects). CRGB is a type provided by the FastLED library that represents a single LED's color, storing its red, green, and blue components.
leds: The pointer variable is named leds. At this point, it is not yet pointing to anything specific—it’s just a pointer that can hold the address of a CRGB object or array.
In essence, CRGB* leds means "leds is a pointer to one or more CRGB objects."

leds = new CRGB[CP]
new CRGB[CP]: Dynamically allocates an array of CRGB objects with CP elements in heap memory. This means the size of the array is determined at runtime (instead of compile-time, as with fixed-size arrays).
leds =: Assigns the starting address of this dynamically allocated array to the leds pointer.
***************************/
