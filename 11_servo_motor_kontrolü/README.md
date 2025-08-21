
# Servo Motor Kontrolü

**Seviye:** Orta  
**Amaç:** SG90 servo motoru 0-180 derece taramak.

## Bileşenler
- Arduino Uno
- SG90 servo
- Harici 5V (önerilir)
- Kablolar

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
Servo: VCC->5V, GND->GND, SINYAL->D9
```

## Bağlantılar (Özet)
- Servo sinyal -> D9
- Hem servo hem Arduino ortak GND

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Harici besleme kullanırken GND'leri birleştirmeyi unutmayın.
