
# Buton ile LED Kontrolü

**Seviye:** Başlangıç  
**Amaç:** Butona basılınca LED'i yakmak.

## Bileşenler
- Arduino Uno
- LED
- 220Ω
- Buton
- 10kΩ pull-down
- Breadboard
- Kablolar

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```

+5V ---[10k]---+--- D2
                                    ( Button )
                     GND -------------+
D13 --R220--> LED --> GND

```

## Bağlantılar (Özet)
- Buton -> D2 (pull-down 10k)
- LED -> D13 üzerinden 220Ω
- Ortak GND

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Dahili PULLUP ile de yapılabilir: pinMode(2, INPUT_PULLUP) ve lojik ters çevrilir.
