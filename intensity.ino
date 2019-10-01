void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i=0, j=0;
for(i=0,j=255; i<=255,j>=0; i++,j--)
{
analogWrite(5,i);
delay(10);
analogWrite(6,j);
delay(10);
}
}
