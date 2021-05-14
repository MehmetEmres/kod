void catal(){
if(catal_durum==0){
if(sensors[5]<300&&sensors[4]<300&&sensors[3]<300){
motorkontrol(50,40); 
while(1){ 
  sensoroku();  
  if(sensors[5]>700){ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;catal_durum=1;break;}
        }}

if(sensors[2]<300&&sensors[3]<300&&sensors[4]<300){
motorkontrol(40,50); 
while(1){ 
  sensoroku();  
  if(sensors[2]>700){ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;catal_durum=1;break;}
        }}


}
}
