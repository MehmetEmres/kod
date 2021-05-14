void t_yol(){
 //Siyah zeminde  
if(sensors[0]<300&&sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[4]<300&&sensors[5]<300&&sensors[6]<300&&sensors[7]<300){
t_say=t_say+1;
while(1)      {
  sensoroku();
  motorkontrol(min_hiz+ekhiz,min_hiz+ekhiz);
  if(!(sensors[0]<300&&sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[4]<300&&sensors[5]<300&&sensors[6]<300&&sensors[7]<300)){
 analogWrite(pervane,0); break;}}}
}

