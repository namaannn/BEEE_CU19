void setup() {
for(int i=2;i<=9;i++)
    {
pinMode(i,OUTPUT);
     }
  }

void loop() {
  for(int i=2;i<10;i++)
     {
digitalWrite(i,HIGH);
int j=j+1;
if(j>9)
{
  j=2;
}
digitalWrite(j,HIGH);
delay(200);
digitalWrite(i,LOW);
digitalWrite(j,LOW);
     }
}
    
