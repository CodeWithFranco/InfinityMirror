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
  //Turn ON Everything
  TurnONWhite(leds1, CP1);
  TurnONWhite(leds2, CP2);
  TurnONWhite(leds3, CP3);
  delay(150);
  for (int i = 0; i < 6; i++){
    TurnGreen(leds3, CP3);
    delay(5);
    TurnOFF(leds3, CP3);
    delay(5);
    TurnGreen(leds3, CP3);
    delay(5);
    TurnRed(leds1, CP1);
    delay(5);
    TurnOFF(leds1, CP1);
    delay(5);
    TurnRed(leds1, CP1);
    delay(5);
    TurnBlue(leds2, CP2);
    delay(5);
    TurnOFF(leds2, CP2);
    delay(5);
    TurnBlue(leds2, CP2);
  }
  TurnGreen(leds3, CP3);
  TurnRed(leds1, CP1);
  TurnBlue(leds2, CP2);

  //Focus on the outside triangle perimeter
  TurnONTriangles(leds3, CP3);
  delay(25);

  TurnONColor_CP1(leds1, CP1);
  RunningLed_red(leds1, CP1);
  RunningLed_blue(leds2, CP2);
  CP3RunningCode(leds3, CP3);
  delay(25);

  for (int i = 0; i < 6; i++){
    TurnONWhite(leds1, CP1);
    delay(75);
    TurnRed(leds1, CP1);
  } 
  for (int i = 0; i < 3; i++){
    TurnONWhite(leds2, CP2);
    delay(75);
    TurnRed(leds2, CP2);
  }
  for(int i = 0; i < 3; i++){
    TurnONWhite(leds3, CP3);
    delay(75);
    TurnRed(leds3, CP3);
  }

  TurnONColor_CP1(leds3, CP3);
  RunningLed_blue(leds2, CP2);
  RunningLed_red(leds3, CP3);
  delay(500);

  //Turn ON Everything
  TurnBlue(leds3, CP3);
  delay(250);
  RunningLed_blue(leds3, CP3);
  TurnONWhite(leds3, CP3);
  delay(50);

  TurnRed(leds2, CP2);
  delay(250);
  RunningLed_red(leds2, CP2);
  TurnONWhite(leds2, CP2);
  delay(10);

  //Turn off everything for mirror effect
  TurnOFF(leds1, CP1);
  TurnOFF(leds2, CP2);
  TurnOFF(leds3, CP3);
  delay(1000);

  //Turn ON Everything
  TurnBlue(leds1, CP1);
  TurnBlue(leds2, CP2);
  TurnBlue(leds3, CP3);
  delay(500);

  for (int i = 0; i < 3; i++){
    TurnONColor_CP1(leds1, CP1);
    delay(25);
    RunningLed_blue(leds3, CP3);
    delay(10);
    TurnONColor_CP1(leds2, CP2);
    delay(25);
    RunningLed_red(leds1, CP1);
    delay(10);
    TurnONColor_CP1(leds3, CP3);
    delay(25);
  }
  
  for (int i = 0; i < 3; i++){
    TurnONWhite(leds1, CP1);
    delay(50);
    TurnRed(leds1, CP1);
  } 
  for (int i = 0; i < 3; i++){
    TurnONWhite(leds2, CP2);
    delay(50);
    TurnRed(leds2, CP2);
  }
  for(int i = 0; i < 3; i++){
    TurnONWhite(leds3, CP3);
    delay(50);
    TurnRed(leds3, CP3);
  }

  //Turn off everything for mirror effect
  TurnOFF(leds1, CP1);
  TurnOFF(leds2, CP2);
  TurnOFF(leds3, CP3);
  delay(8000);
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
