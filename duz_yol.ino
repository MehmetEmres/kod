//Kullanım Şekli: duz_yol(500,150,20,50,0,127);
void duz_yol(int uzunluk,int max_ek_hiz,int pervane_min,int fren_mesafesi,int min_ek_hiz,int pervane_max){ 
if(duz_yol_durum==0){    //Duzyol tamamlandıktan sonra 1 yapılacak
sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;
while(1){
sensoroku();  //Geri bildirim fonksiyonu   
pd();         //Denetim fonksiyonu
motorkontrol(solmotorpwm,sagmotorpwm); //Denetlenen sistem fonksiyonu
encodersay();t_yol();
if(ortalama_uzunluk<uzunluk-fren_mesafesi){
  ekhiz=(max_ek_hiz);analogWrite(pervane,pervane_min);} 
if(ortalama_uzunluk>(uzunluk-fren_mesafesi)){
  ekhiz=min_ek_hiz;analogWrite(pervane,pervane_max);}
if(ortalama_uzunluk>uzunluk){
  sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;duz_yol_durum=1;break;}  
}}}

