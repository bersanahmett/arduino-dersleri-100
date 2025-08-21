
// DHT11 Okuma
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) { Serial.println("Okuma hatasi"); return; }
  Serial.print("Nem: "); Serial.print(h); Serial.print(" %  ");
  Serial.print("Sicaklik: "); Serial.print(t); Serial.println(" C");
  delay(2000);
}
