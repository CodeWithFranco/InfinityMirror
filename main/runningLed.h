#include <FastLED.h>

void RunningLed_red(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
  ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  //Transition
  for (int a = 0; a < CP; a++){
    if (a + 1 < CP){
      ledArray[a+1] = CRGB::White;
      FastLED.show();
      delay(50);
      ledArray[a+1] = CRGB::Red;
    }
  }
}

void RunningLed_blue(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
  ledArray[i] = CRGB::Blue;
  }
  FastLED.show();
  //Transition
  for (int a = CP - 1; a >= 1; a--){
    ledArray[a] = CRGB::White;
    ledArray[a - 1] = CRGB::White;
    FastLED.show();
    delay(50);
    ledArray[a] = CRGB::Blue;
    ledArray[a - 1] = CRGB::Blue;
  }
}