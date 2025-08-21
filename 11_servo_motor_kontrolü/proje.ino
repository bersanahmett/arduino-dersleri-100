
// Servo Taraması
#include <Servo.h>
Servo sv;
void setup(){ sv.attach(9); }
void loop(){
  for(int a=0;a<=180;a++){ sv.write(a); delay(10); }
  for(int a=180;a>=0;a--){ sv.write(a); delay(10); }
}
