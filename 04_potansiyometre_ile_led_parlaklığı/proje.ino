
// PWM ile parlaklık
const int POT=A0, LED=9;
void setup(){}
void loop(){
  int val = analogRead(POT);      // 0-1023
  int pwm = map(val,0,1023,0,255);// 0-255
  analogWrite(LED, pwm);
  delay(5);
}
