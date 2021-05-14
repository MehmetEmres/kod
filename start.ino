void start(){
if(start_durum==0){
  
motorkontrol(100,100);delay(100);
start_durum=1;
ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;analogWrite(pervane,0);


}
}
