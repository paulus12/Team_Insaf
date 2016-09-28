
int ledPin = 2; //led di pin no 2
int inPin = 7;  //tombol di pin no 7
int val = 0;    //variabel menyimpan nilai yg terbaca

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);    //digital pin 13 sbgai output
pinMode(inPin, INPUT);      //digital pin 7 sbgai input
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inPin);   //baca pin input
  digitalWrite(ledPin, val);   //mengatur LED ke nilai tombol
}
