int a0,a1,a2,a3;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  a0=analogRead(A0);
  a1=analogRead(A1);
  a2=analogRead(A2);
  a3=analogRead(A3);

if(a0!=0 || a1!=0 || a2!=0 || a3!=0 )
{
  Serial.print(" ");
  Serial.print(a0);
  Serial.print(" ");
  Serial.print(a1);
  Serial.print(" ");
  Serial.print(a2);
  Serial.print(" ");
  Serial.println(a3);
  delay(100);
  Serial.println("elephant detected.....!!!!!");
}
}
