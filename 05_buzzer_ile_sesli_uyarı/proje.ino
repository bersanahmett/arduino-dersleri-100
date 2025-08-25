// Buzzer ile sesli uyarı örneği
int buzzerPin = 2;      // Buzzer 2. pine bağlı
int delayTime = 1000;   // Uyarı aralığı (ms) - burada 1 saniye

void setup() {
  pinMode(buzzerPin, OUTPUT); // Buzzer pinini çıkış olarak ayarla
}

void loop() {
  digitalWrite(buzzerPin, HIGH); // Buzzer'ı aç
  delay(500);                    // 0.5 saniye çalmasını bekle
  digitalWrite(buzzerPin, LOW);  // Buzzer'ı kapat
  delay(delayTime);               // Belirlediğin aralık kadar bekle
}
