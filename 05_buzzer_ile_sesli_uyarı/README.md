
# Buzzer ile Sesli Uyarı

**Seviye:** Başlangıç  
**Amaç:** Piezo buzzer ile 1kHz uyarı sesi üretmek.

## Bileşenler
- Arduino Uno
- Piezo buzzer (aktif veya pasif)
- Kablolar

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
D8 -> Buzzer -> GND
```

## Bağlantılar (Özet)
- Buzzer (+) -> D8
- Buzzer (-) -> GND

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Pasif buzzer kullanıyorsanız tone() ile frekans üretin.
