#include <SoftwareSerial.h> // HC-05 için SoftwareSerial kütüphanesini dahil ediyoruz.
SoftwareSerial BTSerial(10, 11); // RX | TX pinlerini belirtiyoruz.
void setup() {
  Serial.begin(9600);  // Bilgisayar ile seri iletişimi başlatıyoruz.
  Serial.println("Bluetooth cihazı ile eşleşmeyi bekleniyor..."); 
  
  BTSerial.begin(38400);  // HC-05 ile Bluetooth iletişimini başlatıyoruz.  
  // HC-06 kullanıyorsanız baud hızını 9600 olarak ayarlayın.
}
void loop() {
  if (BTSerial.available()) { // Bluetooth modülünden veri gelmişse
    char gelenVeri = BTSerial.read(); // Veriyi okuyoruz.
    Serial.write(gelenVeri); // Veriyi seri monitöre yazdırıyoruz.
  }
  if (Serial.available()) { // Seri monitörden veri gelmişse
    char gidenVeri = Serial.read(); // Veriyi okuyoruz.
    BTSerial.write(gidenVeri); // Veriyi Bluetooth modülüne gönderiyoruz.
  }
}
