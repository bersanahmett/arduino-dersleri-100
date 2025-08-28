#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

#define SS_PIN 10   // RFID RC522 SDA pin
#define RST_PIN 9   // RFID RC522 RST pin
MFRC522 rfid(SS_PIN, RST_PIN);

Servo kapiservo;

byte authorizedUID[4] = {0xDE, 0xAD, 0xBE, 0xEF}; // BURAYA kendi kart UID değerini yaz

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  kapiservo.attach(3);  // Servo sinyal pini D3
  kapiservo.write(0);   // Kapı kapalı konumda başlasın
  Serial.println("RFID Kart Okutun...");
}

void loop() {
  // Yeni kart kontrolü
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    return;
  }

  Serial.print("Kart UID: ");
  bool authorized = true;
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
    if (rfid.uid.uidByte[i] != authorizedUID[i]) {
      authorized = false;
    }
  }
  Serial.println();

  if (authorized) {
    Serial.println("Yetkili kart! Kapı açılıyor...");
    kapiservo.write(90);   // Kapıyı aç
    delay(3000);           // 3 saniye açık kalsın
    kapiservo.write(0);    // Kapat
    Serial.println("Kapı kapandı.");
  } else {
    Serial.println("Yetkisiz kart!");
  }

  rfid.PICC_HaltA(); // Kartı durdur
  rfid.PCD_StopCrypto1();
}
