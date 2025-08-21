
# LED Blink (Yanıp Sönme)

**Seviye:** Başlangıç  
**Amaç:** LED'i 1 saniye aralıklarla yakıp söndürmek.

## Bileşenler
- Arduino Uno
- LED
- 220Ω direnç
- Breadboard
- Jumper kablolar

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
Pin13 --R220--> LED --> GND
```

## Bağlantılar (Özet)
- LED (+) -> 220Ω -> Pin 13
- LED (-) -> GND

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
delay() yerine millis() ile zamanlayıcı ileride tartışılacaktır.
