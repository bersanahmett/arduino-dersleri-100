int sensor = 2;
int led = 13;
int buzzer = 10;
int sensordurum = LOW;
int deger = 0;
int it = 0;
void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  deger = digitalRead(sensor);
  if (deger == HIGH) {
    digitalWrite(led, HIGH);
    playTone(300, 160);
    delay(150);
    if (sensordurum == LOW) {
      Serial.println("Hareket Tespit Edildi!");
      sensordurum = HIGH;
    }
  } else {
    digitalWrite(led, LOW);
    playTone(0, 0);
    delay(300);
    if (sensordurum == HIGH) {
      Serial.println("Hareket Sonlandi!");
      sensordurum = LOW;
    }
  }
}
void playTone(long duration, int freq) {
  duration *= 1000;
  int period = (1.0 / freq) * 1000000;
  long elapsed_time = 0;
  while (elapsed_time & it, duration) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(period / 2);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(period / 2);
    elapsed_time += (period);
  }
}
