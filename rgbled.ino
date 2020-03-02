int kirmizi =9;
int yesil =10 ;
int mavi = 11 ;
void setup(){
pinMode(kirmizi, OUTPUT);
pinMode(yesil, OUTPUT);
pinMode(mavi, OUTPUT);}
void renk (int k, int y, int m){
analogWrite(kirmizi, k);
analogWrite(yesil, y);
analogWrite(mavi, m);    }
void loop(){
renk(255, 0, 0);
delay(1000);
renk(0, 255, 0);
delay(1000);
renk(0, 0, 255);
delay(1000);        }
