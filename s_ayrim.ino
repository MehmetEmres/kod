void sag_ayrim(){
if(sag_ayrim_durum==0){

if(sensors[1]<300){
motorkontrol(40,-40);   delay(90);
while(1){ 
motorkontrol(40,-40); 
 if(sensors[1]<300||sensors[0]<300){
  ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;sag_ayrim_durum=1;analogWrite(pervane,0);break;
        }}


}
}}
