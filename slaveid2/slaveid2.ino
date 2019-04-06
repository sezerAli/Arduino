#include<Wire.h>
const byte slaveID = 2;

const int lp[14] = {38,36,34,2,4,40,44,3,29,46,42,30,31,27};
const int bp[14] = {35,39,41,9,7,33,45,13,17,43,47,25,23,15}; 

bool durum = false;
bool buton_durumu = false;
char c;

void setup() {
  
 for(int i=0;i<14;i++){
  pinMode(lp[i],OUTPUT);
  pinMode(bp[i],INPUT);}

  Wire.begin(2);
  Wire.onReceive(basla);
  Serial.begin(9600);
  
}

void loop() {
  bitir();
  delay(100);
  
}

void basla(int data)
{
    if(Wire.available()>0)
      {
        c = Wire.read();
        Serial.print(c);

        if(c == 'a')digitalWrite(lp[0],HIGH);delay(500);
        if(c == 'b')digitalWrite(lp[1],HIGH);delay(500);
        if(c == '1')digitalWrite(lp[2],HIGH);delay(500);
        if(c == '2')digitalWrite(lp[3],HIGH);delay(500);
        if(c == '3')digitalWrite(lp[4],HIGH);delay(500);
        if(c == '4')digitalWrite(lp[5],HIGH);delay(500);
        if(c == '5')digitalWrite(lp[6],HIGH);delay(500);
        if(c == '6')digitalWrite(lp[7],HIGH);delay(500);
        if(c == '7')digitalWrite(lp[8],HIGH);delay(500);
        if(c == '8')digitalWrite(lp[9],HIGH);delay(500);
        if(c == '9')digitalWrite(lp[10],HIGH);delay(500);
        if(c == 'c')digitalWrite(lp[11],HIGH);delay(500);
        if(c == '0')digitalWrite(lp[12],HIGH);delay(500);
        if(c == 'd')digitalWrite(lp[13],HIGH);delay(500);
      }

}

void bitir()
{

        if(digitalRead(bp[0]) == HIGH)
      {
         digitalWrite(lp[0],LOW);
         c=0;
      }
        if(digitalRead(bp[1]) == HIGH)
      {
         digitalWrite(lp[1],LOW);
         c=0;
      }
        if(digitalRead(bp[2]) == HIGH)
      {
         digitalWrite(lp[2],LOW);
         c=0;
      }
        if(digitalRead(bp[3]) == HIGH)
      {
         digitalWrite(lp[3],LOW);
         c=0;
      }
        if(digitalRead(bp[4]) == HIGH)
      {
         digitalWrite(lp[4],LOW);
         c=0;
      }
        if(digitalRead(bp[5]) == HIGH)
      {
         digitalWrite(lp[5],LOW);
         c=0;
      }
        if(digitalRead(bp[6]) == HIGH)
      {
         digitalWrite(lp[6],LOW);
         c=0;
      }
        if(digitalRead(bp[7]) == HIGH)
      {
         digitalWrite(lp[7],LOW);
         c=0;
      }
        if(digitalRead(bp[8]) == HIGH)
      {
         digitalWrite(lp[8],LOW);
         c=0;
      }
        if(digitalRead(bp[9]) == HIGH)
      {
         digitalWrite(lp[9],LOW);
         c=0;
      }
        if(digitalRead(bp[10]) == HIGH)
      {
         digitalWrite(lp[10],LOW);
         c=0;
      }
        if(digitalRead(bp[11]) == HIGH)
      {
         digitalWrite(lp[11],LOW);
         c=0;
      }
         if(digitalRead(bp[12]) == HIGH)
      {
         digitalWrite(lp[12],LOW);
         c=0;
      }
        if(digitalRead(bp[13]) == HIGH)
      {
         digitalWrite(lp[13],LOW);
         c=0;
      }

 }
