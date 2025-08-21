
// LCD I2C + DHT11
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
LiquidCrystal_I2C lcd(0x27,16,2);
DHT dht(DHTPIN, DHTTYPE);
void setup(){
  lcd.init(); lcd.backlight();
  dht.begin();
  lcd.print("Sicaklik&Nem");
}
void loop(){
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  if (isnan(h)||isnan(t)) { lcd.clear(); lcd.print("Okuma Hatası"); delay(1000); return; }
  lcd.setCursor(0,1);
  lcd.print("T:"); lcd.print(t); lcd.print("C H:"); lcd.print((int)h); lcd.print("% ");
  delay(1000);
}
