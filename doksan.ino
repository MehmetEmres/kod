void doksan(){
if(doksan_durum==0){
//siyah zemin sağa doksan derece
if(sensors[0]<300&&sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[6]>700&&sensors[7]>700){
motorkontrol(-30,-80); 
while(1){ 
  sensoroku();  
  if(sensors[0]>700&&sensors[1]>700){break;}
        }
while(1){
  sensoroku();  
  motorkontrol(80,-40);
  if(sensors[0]<300||sensors[1]<300){
ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;analogWrite(pervane,0);doksan_durum=1;break;}
        }}
//******************************


// siyah zemin sola doksan derece
if(sensors[7]<300&&sensors[6]<300&&sensors[5]<300&&sensors[4]<300&&sensors[1]>700&&sensors[0]>700){
motorkontrol(-80,-30);
while(1){
  sensoroku();  
  if(sensors[7]>700&&sensors[6]>700){break;}
        }       
while(1){
  sensoroku();  
  motorkontrol(-40,80);
  if(sensors[7]<300||sensors[6]<300){
ekhiz=0;sol_encoder_say=0;sag_encoder_say=0;ortalama_uzunluk=0;analogWrite(pervane,0);doksan_durum=1;break;}
        }             }





}
}





