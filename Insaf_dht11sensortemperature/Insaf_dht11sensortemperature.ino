#include <dht.h>

#define dht_apin A0 //lokasi pin sensor analog yang terhubung

dht DHT;

void setup() {
  // put your setup code here, to run once:
  // perintah standar;
  Serial.begin(9600);
  delay(500); //delay untuk membiarkan system boot
  Serial.println("DHT11 Humidity & Temperature Sensor\n\n");
  delay(1000); //menunggu sebelum akses sensor
  
}

void loop() {
  // put your main code here, to run repeatedly: 
  //perintah standar

DHT.read11(dht_apin);


  Serial.print("Kelembapan saat=  ");
  Serial.print(DHT.humidity);
  Serial.print("&  ");
  Serial.print("temperatur=  ");
  Serial.print(DHT.temperature);
  Serial.println("C  ");
delay(5000); // tunggu 5 detik sebelum akses sensor
}
