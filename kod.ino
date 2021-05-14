// Uyarı dik çizgi okumalarında encoder sayıları sıfırlanmıştır.
#include <QTRSensors.h>
#define min_hiz 50
#define sagAin2 10
#define sagAin1 9
#define sagmotorpwmpin 11
#define solBin2 4
#define solBin1 7
#define solmotorpwmpin 5
#define mz80_pin 12
#define taktik 8
#define LED 13
#define solencoder 2
#define sagencoder 3
#define pervane 6
QTRSensorsAnalog qtra((unsigned char[]){A0,A1,A2,A3,A4,A5,A6,A7},8);





unsigned int sensors[8];
float Kp=0.04; float Kd=0.6; 
//float Kp=0.00; float Kd=0.1; 
int ekhiz=0;  int sonhata=0; int hata=0; 
int sagmotorpwm=0; int solmotorpwm=0; int zemin=1;
int t_say=0; 
int pist_bolum=1;int durak=0;
int sag_encoder_yuzey=0;int sag_encoder_say=0;int sol_encoder_yuzey=0;int sol_encoder_say=0;
int kutu_mesafe;
int taktik_durum;int engel_durum;
int duz_yol_durum=0;
int doksan_durum=0;
int zik_zak_say=0;
int zik_zak_durum=1;
int catal_durum=1;
int start_durum=0;
int ortayol_durum=1;
int sag_ayrim_durum=1;
int daire_t_durum=1;
int uclu_catal_durum=1;
int final_kutu_durum=1;
int t_ayrim_durum=1;
int bitis_durum=1;
int rulman_durum=5;
float ortalama_uzunluk=0;
float tur_carpani=5.024; 
// Teker çapına göre değişir.çapı 3.2 ve iki beyaz şeritli jant için geçerlidir. 3.14*çap/2





void setup() {
  Serial.begin(9600);
pinMode(sagAin2,OUTPUT);pinMode(sagAin1,OUTPUT);
pinMode(sagmotorpwmpin,OUTPUT);
pinMode(solBin2,OUTPUT);pinMode(solBin1,OUTPUT);
pinMode(solmotorpwmpin,OUTPUT);
pinMode(pervane,OUTPUT);pinMode(mz80_pin,INPUT);pinMode(taktik,INPUT);
pinMode(solencoder,INPUT);pinMode(sagencoder,INPUT);
pinMode(LED,OUTPUT);
analogWrite(pervane,0);
digitalWrite(LED,HIGH);





for(int i=0;i<150;i++)
{
  if(0<=i && i<5) motorkontrol(15+rulman_durum,-15-rulman_durum);
  if(5<=i && i<15) motorkontrol(-15-rulman_durum,15+rulman_durum);
  if(15<=i && i< 25) motorkontrol(15+rulman_durum,-15-rulman_durum);
  if(25<=i && i<35) motorkontrol(-15-rulman_durum,15+rulman_durum);
  if(35<=i && i< 40) motorkontrol(15+rulman_durum,-15-rulman_durum);
  if(45<=i && i<50) motorkontrol(-15-rulman_durum,15+rulman_durum);
qtra.calibrate();delay(1);
if(i>=50){
motorkontrol(0,0);
delay(3);}}
flashyap();
taktik_durum=digitalRead(taktik);
while(digitalRead(mz80_pin)==LOW){motorkontrol(0,0);}
}

void loop() {

digitalWrite(LED,HIGH);

sensoroku();
pd();
motorkontrol(solmotorpwm,sagmotorpwm);
//motorkontrol(60,60);
//encodersay();
doksan();
doksan_durum=0;
digitalWrite(LED,1);
//analogWrite(pervane,200);

}
if (durak == 0)
{
    duz_yol_durum = 0;
    duz_yol(200, 150, 20, 20, 0, 127);
    doksan_durum = 0;
    durak = 1;
}
if (durak == 1 && doksan_durum == 0)
{
    doksan();
}
if (durak == 1 && doksan_durum == 1)
{
    duz_yol_durum = 0;
    duz_yol(100, 150, 20, 20, 0, 127);
    doksan_durum = 0;
    durak = 2;
}
if (durak == 2 && doksan_durum == 0)
{
    doksan();
}
if (durak == 1 && doksan_durum == 1)
{
    duz_yol_durum = 0;
    duz_yol(100, 150, 20, 20, 0, 127);
    doksan_durum = 0;
    durak = 2;
}
if (durak == 2 && doksan_durum == 0)
{
    doksan();
}
if (durak == 2 && doksan_durum == 1)
{
    duz_yol_durum = 0;
    duz_yol(200, 150, 20, 20, 0, 127);
    doksan_durum = 0;
    durak = 3;
    if (durak == 3 && doksan_durum == 0)
    {
        doksan();
    }
    if (durak == 3 && doksan_durum == 1)
    {
        duz_yol_durum = 0;
        duz_yol(300, 150, 20, 20, 0, 127);
    }
























