void bitis(){
if(bitis_durum==0){
  if(sensors[0]<300&&sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[4]<300&&sensors[5]<300&&sensors[6]<300&&sensors[7]<300){

while(1)      {
  sensoroku();
  motorkontrol(min_hiz+ekhiz,min_hiz+ekhiz);delay(50);
  if(!(sensors[0]<300&&sensors[1]<300&&sensors[2]<300&&sensors[3]<300&&sensors[4]<300&&sensors[5]<300&&sensors[6]<300&&sensors[7]<300)){
 bitis_durum=1;dur();
  break;}}} 
}


}
