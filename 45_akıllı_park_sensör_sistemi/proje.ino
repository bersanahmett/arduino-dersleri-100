const int trigPin = 2;    // Ultrasonik sensörün trig pini
const int echoPin = 3;    // Ultrasonik sensörün echo pini
const int greenLedPin = 4;  // Yeşil LED'in bağlı olduğu pin
const int redLedPin = 5;    // Kırmızı LED'in bağlı olduğu pin

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Ultrasonik sensörden mesafe ölçümü
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  // Sensörün algıladığı mesafeleri görmek için
  Serial.print("Mesafe: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Mesafe 10 cm'den daha kısa ise yeşil LED'i yak, aksi halde kırmızı LED'i yak ama alttaki 10 sayısı değiştiğirirseniz santimde öyle değişir
  if (distance < 10) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }

  delay(500);  // Ölçümler arasında 0.5 saniye bekleme yapıyor
}
