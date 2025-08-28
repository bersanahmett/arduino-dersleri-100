#include <OneWire.h>
#include <DallasTemperature.h>

// Sensörün bağlı olduğu pin
#define ONE_WIRE_BUS 2

// OneWire ve DallasTemperature nesneleri
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void) {
  Serial.begin(9600);       // Seri iletişimi başlat
  sensors.begin();          // Sensörü başlat
}

void loop(void) { 
  sensors.requestTemperatures();             // Ölçüm iste
  float tempC = sensors.getTempCByIndex(0);  // Santigrat olarak sıcaklık al

  Serial.print("Sıcaklık: ");
  Serial.print(tempC);
  Serial.println(" °C");

  delay(1000); // 1 saniye bekle
}
