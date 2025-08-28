int sensor = 2; 
int deger = 0;

#include <Servo.h> 
Servo motor; 
 
void setup() {
pinMode(sensor, INPUT);  
motor.attach(9);  
}
 
void loop(){
  
motor.write(0);
deger = digitalRead(sensor); 
if (deger == HIGH) {

 motor.write(180);
 delay(5000);
}

}

