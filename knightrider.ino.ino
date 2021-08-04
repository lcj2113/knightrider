int i;
int led[]={2,3,4,5,6,7,8};

void setup() {
 for(i=0;i<8;i++)
 {pinMode(led[i],OUTPUT);}
}
void loop() {
  for(i=0;i<8;i++)
  {digitalWrite(led[i],HIGH);
  delay(100);
  digitalWrite(led[i],LOW);}
  for(i=8;i>=0;i--)
  {digitalWrite(led[i],HIGH);
  delay(200);
  digitalWrite(led[i],LOW);
}
}
