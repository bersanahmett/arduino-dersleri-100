
// HC-SR04 Mesafe
const int TRIG=9, ECHO=10;
void setup(){
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}
void loop(){
  digitalWrite(TRIG, LOW); delayMicroseconds(2);
  digitalWrite(TRIG, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long sure = pulseIn(ECHO, HIGH, 30000); // 30ms timeout
  float mesafe = sure * 0.0343 / 2.0;
  Serial.println(mesafe);
  delay(200);
}
