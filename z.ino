void zikzak(){
if(zik_zak_durum==0){

//siyah zemin sağa doksan derece
if(sensors[0]<300&&sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[6]>700&&sensors[7]>700){
motorkontrol(-10,-50); 
while(1){ 
  sensoroku();  
  if(sensors[0]>700&&sensors[1]>700){break;}
        }
while(1){
  sensoroku();  
  motorkontrol(60,-20);
  if(sensors[0]<300||sensors[1]<300){
zik_zak_say=zik_zak_say+1;break;}
        }}
//******************************


// siyah zemin sola doksan derece
if(sensors[7]<300&&sensors[6]<300&&sensors[5]<300&&sensors[4]<300&&sensors[1]>700&&sensors[0]>700){
motorkontrol(-50,-10);
while(1){
  sensoroku();  
  if(sensors[7]>700&&sensors[6]>700){break;}
        }       
while(1){
  sensoroku();  
  motorkontrol(-20,60);
  if(sensors[7]<300||sensors[6]<300){
analogWrite(pervane,0);zik_zak_say=zik_zak_say+1;break;}
        }                                                                                                                                                                                        }
if(zik_zak_say==3){
  ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;zik_zak_durum=1;analogWrite(pervane,0);
}




}
}

