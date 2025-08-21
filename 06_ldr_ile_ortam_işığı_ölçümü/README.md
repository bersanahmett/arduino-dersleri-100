
# LDR ile Ortam Işığı Ölçümü

**Seviye:** Başlangıç  
**Amaç:** LDR ile ışık seviyesini ölçüp seri porta yazdırmak.

## Bileşenler
- Arduino Uno
- LDR
- 10kΩ
- Breadboard

## Devre Şeması
Aşağıdaki ASCII diyagram hızlı referans içindir. Görsel şema (Fritzing/şematik) eklenebilir.
```

5V ---[LDR]---+--- A0
              |
             [10k]
              |
             GND

```

## Bağlantılar (Özet)
- LDR ve 10k ile gerilim bölücü: düğüm -> A0

## Kod
`proje.ino` dosyasını yükleyin.

## Notlar
LDR karanlıkta yüksek, aydınlıkta düşük direnç verir (bağlantıya göre okuma değişir).
