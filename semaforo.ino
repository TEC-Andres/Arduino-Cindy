/*
#       Sesión 2: Introducción a Compu ─ Cynthia Lisbeth
#		    Alonso Plancarte
#
#       Copyright (C) Tecnológico de Monterrey
#
#       Archivo: semaforo.ino
#
#       Creado:                   10/05/2024
#       Última Modificación:      11/05/2024
*/
#define LED_VERDE 2
#define LED_AMARILLO 4
#define LED_ROJO 6

void setup()
{
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
}

void loop()
{
  digitalWrite(LED_VERDE, HIGH);
  delay(1750);
  parpadeo();
  parpadeo();
  parpadeo();
  parpadeo();
  parpadeo();
  digitalWrite(LED_AMARILLO, HIGH);
  delay(1000);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_ROJO, HIGH);
  delay(2000);
  digitalWrite(LED_ROJO, LOW);
}

void parpadeo(){
  digitalWrite(LED_VERDE, HIGH);
  delay(250);
  digitalWrite(LED_VERDE, LOW);
  delay(250);
}
