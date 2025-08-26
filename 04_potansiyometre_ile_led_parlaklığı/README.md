
# Potansiyometre ile LED Parlaklığı

**Seviye:** Başlangıç  
**Amaç:** Pot değerine göre PWM ile LED parlaklığı ayarlamak.

## Bileşenler
- Arduino Uno
- LED
- 220Ω
- 10kΩ potansiyometre
- Breadboard



## Bağlantılar (Özet)
- Pot orta ucu -> A0
- Pot uçları -> 5V ve GND
- LED -> D9 (PWM) üzerinden 220Ω

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
analogRead 0-1023 aralığını 0-255'e ölçeklemek için map veya bölme kullanılır.
