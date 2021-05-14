void daire_t(){

 if(daire_t_durum==0){
  

if(sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[4]<300&&sensors[5]<300&&sensors[6]<300){
motorkontrol(-50,-10);
while(1){ 
  sensoroku();  
  if(sensors[7]>700&&sensors[6]>700){break;}
        }
while(1){
sensoroku();  
motorkontrol(-20,60);
if(sensors[7]<300||sensors[6]<300){
ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;daire_t_durum=1;analogWrite(pervane,0);break;}
        } 

}
 }
 }
