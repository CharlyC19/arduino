//#include <SoftwareSerial.h> //libreria para conexión bluetooth

//SoftwareSerial BT(10,11); //TX,RX
String voz;//variable tipo de cadena
int led=13;//pin del led

void setup() 
{
//  BT.begin(9600);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() 
{
//  while(BT.available())
  while (Serial.available())
  {
    delay(10);
    //char dato=BT.read();
    char dato=Serial.read();
    voz += dato;
  }
  if(voz.length()>0)
  {
    Serial.println(voz);
  }
  if (voz=="prende")
  {
    digitalWrite(led,HIGH);
  }
  voz="";
}
