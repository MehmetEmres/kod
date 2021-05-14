void final_kutu(){
 if(final_kutu_durum==0){



  
if(digitalRead(mz80_pin)==LOW){

motorkontrol(-40,40);delay(150);
motorkontrol(40,40);delay(100);
while(1){
sensoroku();  
motorkontrol(50,40);
if(sensors[7]<300||sensors[6]<300){
sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;analogWrite(pervane,0);final_kutu_durum=1;break;  
}




} 


  
 }


}
}
