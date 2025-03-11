const int pin[]={2,3,4,5};
int count=0;

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<4;i++)
  {
    pinMode(pin[i],OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
   for(int i=0;i<4;i++)
  {
    digitalWrite(pin[i],(count>>i)&1);
  }
  count=(count+1)%16;
  delay(500);
}
