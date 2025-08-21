
# DHT11 ile Sıcaklık & Nem Ölçümü

**Seviye:** Başlangıç-Orta  
**Amaç:** DHT11 sensöründen sıcaklık ve nem verisi okumak.

## Bileşenler
- Arduino Uno
- DHT11 sensörü
- 10kΩ (gerekirse)
- Kablolar

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
D2 -> DHT11 data; 5V ve GND bağlantıları
```

## Bağlantılar (Özet)
- DHT11 VCC -> 5V
- GND -> GND
- DATA -> D2 (pullup içerebilir)

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Kütüphane: Adafruit Unified + Adafruit DHT (Library Manager).
