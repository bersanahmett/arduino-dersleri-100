
// RGB PWM
const int R=9,G=10,B=11;
void setup(){ pinMode(R,OUTPUT); pinMode(G,OUTPUT); pinMode(B,OUTPUT); }
void setRGB(int r,int g,int b){ analogWrite(R,r); analogWrite(G,g); analogWrite(B,b); }
void loop(){
  for(int i=0;i<=255;i+=5){ setRGB(i,0,0); delay(20); }
  for(int i=0;i<=255;i+=5){ setRGB(0,i,0); delay(20); }
  for(int i=0;i<=255;i+=5){ setRGB(0,0,i); delay(20); }
  setRGB(255,255,255); delay(500);
  setRGB(0,0,0); delay(500);
}
