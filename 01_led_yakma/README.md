
# LED Yakma

**Seviye:** Başlangıç  
**Amaç:** Arduino ile tek bir LED'i yakmak.

## Bileşenler
- Arduino Uno
- LED (5mm)
- 220Ω direnç
- Breadboard
- Jumper kablolar

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```

+5V       GND
 |         |
( )       ---
 |         -
R220       |
 |         |
Pin13 -----|>---- (LED)

```

## Bağlantılar (Özet)
- LED anot (+) -> 220Ω -> Pin 13
- LED katot (-) -> GND

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Dahili kart LED'i de Pin 13'e bağlıdır (UNO). Harici LED kullanırken yönüne dikkat edin.
