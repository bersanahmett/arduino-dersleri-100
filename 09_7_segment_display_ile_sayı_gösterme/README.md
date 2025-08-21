
# 7 Segment Display ile Sayı Gösterme

**Seviye:** Orta  
**Amaç:** Ortak katot 1 hane 7-seg ile 0-9 saymak.

## Bileşenler
- Arduino Uno
- 7-segment (ortak katot)
- 220Ω x7
- Breadboard

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```
a,b,c,d,e,f,g -> D2..D8; ortak katot -> GND
```

## Bağlantılar (Özet)
- a->D2
- b->D3
- c->D4
- d->D5
- e->D6
- f->D7
- g->D8
- Ortak katot -> GND (dirençler segmentlerde)

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
Donanım tipine göre segment haritasını uyarlayın (ortak anot için lojik terslenir).
