#include <SimpleSDAudio.h>

// LED pinleri
const int ledPins[] = {5, 6, 7, 8};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // LED pinlerini çıkış olarak ayarla
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  SdPlay.setSDCSPin(4);

  if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))
  {
    while (1);
  }

}

void loop() {
   ledAnimation();
   
   if (!SdPlay.setFile("araba.wav")) //Müzik Dosya Adı
   {
      while (1);
   }

  SdPlay.play();
  while (!SdPlay.isStopped())
  {
    ;
  }
  
}

void ledAnimation() {
  // LED animasyonu
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // LED'i yak
    delay(100); // 100 ms bekle
    digitalWrite(ledPins[i], LOW); // LED'i söndür
  }

  // Ters yönde LED animasyonu
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // LED'i yak
    delay(100); // 100 ms bekle
    digitalWrite(ledPins[i], LOW); // LED'i söndür
  }
}
