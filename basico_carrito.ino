/*
 * funciones basicas para un carro
 * adelante, atras, izquierda y derecha
 */

int izqA=3; //motor izquierda A
int izqB=4; //motor izquierda B
int derA=5; //motor derecha A
int derB=6; //motor derecha A


void setup() 
{
  pinMode(izqA,OUTPUT);
  pinMode(izqB,OUTPUT);
  pinMode(derA,OUTPUT);
  pinMode(derB,OUTPUT);
}
 
void adelante()
{  
  digitalWrite(derA,HIGH); digitalWrite(izqA,HIGH);
  digitalWrite(derB,LOW);  digitalWrite(izqB,LOW);
}

void atras()
{  
  digitalWrite(derA,LOW);  digitalWrite(izqA,LOW);
  digitalWrite(derB,HIGH); digitalWrite(izqB,HIGH);
}

void izquierda()
{
  digitalWrite(derA,LOW);   digitalWrite(izqA,HIGH);
  digitalWrite(derB,HIGH);  digitalWrite(izqB,LOW);
}  
  
void derecha()
{
  digitalWrite(derA,HIGH);   digitalWrite(izqA,LOW);
  digitalWrite(derB,LOW);    digitalWrite(izqB,HIGH);
}  


void loop() 
{


}
