//TestInsaf1_Blink LED

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT); //Digital pin 12 sebagai output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH); //LED on
  delay(1000);            //1 detik menunggu
  digitalWrite(2,LOW);  //LED mati
  delay(2000);            //2 detik menunggu
}
