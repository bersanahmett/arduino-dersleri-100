
#define BLYNK_PRINT Serial

// İlgili Kütüphaneler eklendi
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Projenize ait Auth Token. Uygulama içinden veya mail adresinizden erişebilirsiniz
char auth[] = "Auth Token";

//WiFi ağ adınız ve parolanız
char ssid[] = "Ağ Adınız";
char pass[] = "Ağ Parolanız";

int sensorPin = A0; // Sensör bağlantı pini
int sensorDeger;
int buzzer = D5; //GPIO 14
bool bildirim = true;

BlynkTimer timer;

//Sensörümüzün verdiği değerleri okuyup verileri uygulamamıza gönderiyoruz.
void sensorOku()
{
  sensorDeger = analogRead(sensorPin); // Sensör okunarak alınan veri sensorDeger değişkenine eşitleniyor.
  Blynk.virtualWrite(V1, sensorDeger); // sensorDeger verisi Blynk uygulamasında V1 pinine gönderiliyor.

  //Sensör verisi 300 ün altına düştüğünde ve bildirim değişkeni true oldugunda döngü çalışır.
  if (sensorDeger < 300 && bildirim) {
    Blynk.notify("DİKKAT! Yangın Alarmı Devrede! "); // Telefonumuza belirlediğimiz içerikte bildirim gönderiliyor.

    //for döngüsünde D5 pinine bağlı buzzerın 5 kere uyarı vermesini sağlıyoruz.
    for (int i = 0; i < 5; i++) {
      digitalWrite(buzzer, HIGH);
      delay(300);
      digitalWrite(buzzer, LOW);
      delay(300);
    }
    bildirim = false;
  }

  //Sensör verisi 700 ün üzerinde çıktığında döngü çalışır.
  if (sensorDeger > 700) {
    bildirim = true;
  }
}


void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  Blynk.notify("Cihaz Açıldı"); // Başlangıçta Cihaz Açıldı bildirimi gönder.
  pinMode(buzzer, OUTPUT); // buzzer pinini ÇIKIŞ olarak ayarlıyoruz
  // Saniyede 1 defa sensorOku fonksiyonu çağırıyoruz
  timer.setInterval(1000L, sensorOku);
}

void loop()
{
  Blynk.run();
  timer.run();
}
