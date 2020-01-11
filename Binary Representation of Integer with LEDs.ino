void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
int x=2;
int k=1;
void loop() {
  // put your main code here, to run repeatedly:
 // if(!Serial.available())
    x=Serial.parseInt();
  if(x==9999){
    for(int i=2;i<9;++i)
  {
      digitalWrite(i,LOW);
  }
  }
  if(x!=0 && x!=9999)
  {
  Serial.print(x);
  int t=x;
  for(int i=2;i<9;++i)
  {
    int r=t%2;
    t=t/2;
    if(r==1)
      digitalWrite(i,HIGH);
    else
      digitalWrite(i,LOW);
  }
  }
}
