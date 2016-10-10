//untuk penggunaan dua lampu :)
int LED = 6; // digital pin untuk LED
int led = 9; // digital pin untuk LED 
int lEd = 11; // digital pin untuk LED
int pinPot = 0; // pin analog untuk VR
int potVal = 0; // tempat menerima nilai tegangan dari VR

void setup() {
pinMode(LED,OUTPUT); // LED sebagai outputnya
pinMode(led,OUTPUT); // led sebagai output
pinMode(lEd,OUTPUT); // lEd sebagai output
}

void loop() {
potVal = analogRead(pinPot); //menerima masukan nilai dari VR;
potVal = map(potVal, 0, 1023, 0 , 255); //ubah nilai (0-1023) jadi(0-255) 
//map untuk apa?
analogWrite(LED,potVal); // ubah nilai VR untuk mengatur kecerahan
analogWrite(led,potVal); // ubah nilai VR untuk mengatur kecerahan
analogWrite(lEd,potVal); // ubah nilai VR untuk mengatur kecerahan
}
/*jika diubah selain digital pin 5,6,9,10,11, maka nyala lampu tidak redup :D :V, 
kenapa bisa seperti ini?
digital pin 1,2,3,4,7,8,12,13 
*/
