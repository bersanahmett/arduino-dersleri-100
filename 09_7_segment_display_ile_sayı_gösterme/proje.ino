
// 7-Segment 0..9
const int seg[7]={2,3,4,5,6,7,8}; // a..g
const byte digits[10][7]={
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}  //9
};
void setup(){ for(int i=0;i<7;i++) pinMode(seg[i], OUTPUT); }
void showDigit(int d){
  for(int i=0;i<7;i++) digitalWrite(seg[i], digits[d][i]?HIGH:LOW);
}
void loop(){
  for(int d=0; d<10; d++){ showDigit(d); delay(700); }
}
