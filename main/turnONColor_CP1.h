#include <FastLED.h>

void TurnONColor_CP1(CRGB* ledArray, int CP) {
  for (int i = 0; i < CP; i++) {
    ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000);

  for (int maxBrightness = 255; maxBrightness >= 0; maxBrightness -= 5) { // Corrected decrement
    for (int i = 0; i < CP; i++) {
      ledArray[i] = CRGB::Red;
      ledArray[i].fadeLightBy(255 - maxBrightness);
    }
    FastLED.show();
    delay(100);
  }

  for (int i = 0; i < CP; i++) {
    ledArray[i] = CRGB::Blue;
  }
  FastLED.show();
  delay(1000);

  for (int maxBrightness = 255; maxBrightness >= 0; maxBrightness -= 5) { // Corrected decrement
    for (int i = 0; i < CP; i++) {
      ledArray[i] = CRGB::Blue;
      ledArray[i].fadeLightBy(255 - maxBrightness);
    }
    FastLED.show();
    delay(100);
  }
}

void TurnONWhite(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
    ledArray[i] = CRGB::White;
  }
  FastLED.show();
  delay(25);
}

void TurnBlue(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
    ledArray[i] = CRGB::Blue;
  }
  FastLED.show();
  delay(25);
}

void TurnRed(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
    ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(25);
}

void TurnOFF(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
    ledArray[i] = CRGB::Black;
  }
  FastLED.show();
  delay(25);
}
