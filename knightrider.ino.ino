int pinArray[]={2,3,4,5,6};
int count = 0

void setup() {
 for(counr=0;count<7;count++)
 {pinMode(pinArray[count],OUTPUT);}
}
void loop() {
  for(count=2;count<7;count++){
   digitalWrite(count,HIGH);
  delay(100);
  digitalWrite(count,LOW);
}
}
