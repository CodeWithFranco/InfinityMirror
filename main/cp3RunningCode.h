#include <FastLED.h>

void CP3RunningCode(CRGB* ledArray, int CP){
  for (int i = 0; i < CP; i++) {
  ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000);
  //Transition1
  for (int i = 5; i <= 14; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(100);
  }

  //transition2
    for (int i = 21; i <= 30; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(100);
  }
  //transition3
  for (int i = 38; i <= 46; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(100);
  }
  //transition2
  for (int i = 55; i <= 63; i++){
    ledArray[i] = CRGB::White;
    FastLED.show();
    delay(100);
  }
  for (int i = 0; i < CP; i++) {
  ledArray[i] = CRGB::Green;
  }
  FastLED.show();
  delay(1500);
}

void TurnONTriangles(CRGB* ledArray, int CP){
    //Transition1
  for(int a = 0; a < 3; a++){
    for (int maxBrightness = 255; maxBrightness >= 0; maxBrightness -= 15) { // Corrected decrement
      for (int i = 5; i < 14; i++) {
        ledArray[i] = CRGB::Blue;
        ledArray[i].fadeLightBy(255 - maxBrightness);
      }
      FastLED.show();
      delay(10);
    }
  }
  for (int i = 5; i <= 14; i++){
    ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(250);

    //Transition2
  for(int a = 0; a < 3; a++){
    for (int maxBrightness = 255; maxBrightness >= 0; maxBrightness -= 15) { // Corrected decrement
      for (int i = 21; i < 30; i++) {
        ledArray[i] = CRGB::Red;
        ledArray[i].fadeLightBy(255 - maxBrightness);
      }
      FastLED.show();
      delay(10);
    }
  }
  for (int i = 21; i <= 30; i++){
    ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(250);

    //Transition3
  for(int a = 0; a < 3; a++){
    for (int maxBrightness = 255; maxBrightness >= 0; maxBrightness -= 15) { // Corrected decrement
      for (int i = 38; i < 46; i++) {
        ledArray[i] = CRGB::Blue;
        ledArray[i].fadeLightBy(255 - maxBrightness);
      }
      FastLED.show();
      delay(10);
    }
  }
  for (int i = 38; i <= 46; i++){
    ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(250);

    //Transition4
  for(int a = 0; a < 3; a++){
    for (int maxBrightness = 255; maxBrightness >= 0; maxBrightness -= 15) { // Corrected decrement
      for (int i = 55; i < 63; i++) {
        ledArray[i] = CRGB::Red;
        ledArray[i].fadeLightBy(255 - maxBrightness);
      }
      FastLED.show();
      delay(10);
    }
  }  
  for (int i = 55; i <= 63; i++){
    ledArray[i] = CRGB::Red;
  }
  FastLED.show();
  delay(250);
}
  