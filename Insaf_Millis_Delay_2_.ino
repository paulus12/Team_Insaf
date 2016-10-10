const int pinnyaLED =13;
int kondisiLED = LOW;
long MillisSebelumnya = 0;
long intervalWaktu = 1000;

void setup() 
{
  // put your setup code here, to run once:
pinMode(pinnyaLED,OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
unsigned long MillisSaatIni = millis();
if(MillisSaatIni - MillisSebelumnya > intervalWaktu)
{
  MillisSebelumnya = MillisSaatIni;
if(kondisiLED = LOW)
{
  kondisiLED = HIGH;
  }
else
{
  kondisiLED = LOW;
  }
  digitalWrite(pinnyaLED,kondisiLED);
  }
}
