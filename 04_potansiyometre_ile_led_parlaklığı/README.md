
# Potansiyometre ile LED Parlaklığı

**Seviye:** Başlangıç  
**Amaç:** Pot değerine göre PWM ile LED parlaklığı ayarlamak.

## Bileşenler
- Arduino Uno
- LED
- 220Ω
- 10kΩ potansiyometre
- Breadboard

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
A0 <-- orta uç pot | pot uçları -> +5V ve GND; D9 --R220--> LED -> GND
```

## Bağlantılar (Özet)
- Pot orta ucu -> A0
- Pot uçları -> 5V ve GND
- LED -> D9 (PWM) üzerinden 220Ω

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
analogRead 0-1023 aralığını 0-255'e ölçeklemek için map veya bölme kullanılır.
