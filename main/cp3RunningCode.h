#include <FastLED.h>

void CP3RunningCode(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
  ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(500);
  //Transition1
  for (int i = 5; i <= 14; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(250);
  }
  //transition2
    for (int i = 21; i <= 30; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(250);
  }
  //transition3
  for (int i = 38; i <= 46; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(250);
  }
  //transition2
  for (int i = 55; i <= 63; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(250);
  }
  for (int i = 0; i < CP; i++) {
  ledArray[i] = CRGB::Green;
  }
  FastLED.show();
  delay(250);
}
  