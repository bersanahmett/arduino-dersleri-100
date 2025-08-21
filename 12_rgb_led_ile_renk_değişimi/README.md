
# RGB LED ile Renk Değişimi

**Seviye:** Orta  
**Amaç:** RGB LED'in renk kanallarını PWM ile karıştırmak.

## Bileşenler
- Arduino Uno
- RGB LED (ortak katot)
- 220Ω x3
- Breadboard

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
R->D9, G->D10, B->D11; ortak katot->GND
```

## Bağlantılar (Özet)
- R->D9 (R220)
- G->D10 (R220)
- B->D11 (R220)
- Ortak -> GND

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Ortak anot kullanıyorsanız lojik terslenmelidir.
