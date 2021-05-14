void uclu_catal(){

 if(uclu_catal_durum==0){
  

if(sensors[1]<300&&sensors[3]<300&&sensors[4]<300){
motorkontrol(-10,50);delay(90);
while(1){
  sensoroku();
motorkontrol(-10,50);
if(sensors[4]<300||sensors[5]<300||sensors[6]<300||sensors[7]<300){
  ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;uclu_catal_durum=1;analogWrite(pervane,0);break; 
}

   }
}
 }
 }
