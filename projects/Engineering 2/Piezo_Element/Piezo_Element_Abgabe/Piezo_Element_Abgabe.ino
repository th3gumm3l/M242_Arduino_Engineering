/*
	Abgabe von PiezoElement Projekt
    
    Datum:		01.12.2022
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse:		INF20s
    Version:	V1
    Board: 		Arduino Uno
*/

void setup()
{
  
}

void loop()
{
  tone(8, 100);
  delay(1000);
  noTone(8); // An dieser Stelle geht der erste Ton aus.
  tone(8, 200); // Der zweite Ton mit der neuen Tonhöhe “200” ertönt.
  delay(1000); //… und zwar für eine Sekunde...
  noTone(8); // An dieser Stelle geht der zweite Ton aus und der Loop-Teil des Sketches beginnt von vorn.
}