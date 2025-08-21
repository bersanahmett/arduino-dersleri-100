
// Buton ile LED
const int BTN=2, LED=13;
void setup(){
  pinMode(BTN, INPUT);
  pinMode(LED, OUTPUT);
}
void loop(){
  digitalWrite(LED, digitalRead(BTN)==HIGH ? HIGH : LOW);
}
