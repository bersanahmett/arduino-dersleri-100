
# I2C LCD ile Sıcaklık Göstergesi

**Seviye:** Orta  
**Amaç:** DHT11 verisini 16x2 I2C LCD ekranda göstermek.

## Bileşenler
- Arduino Uno
- DHT11
- LCD 16x2 + I2C backpack (0x27 yaygın)
- Kablolar



## Bağlantılar (Özet)
- LCD VCC->5V, GND->GND, SDA->A4, SCL->A5
- DHT11 DATA->D2

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Kütüphane: LiquidCrystal_I2C; adres 0x27/0x3F olabilir.
