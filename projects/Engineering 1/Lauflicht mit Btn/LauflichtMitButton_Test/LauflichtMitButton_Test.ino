/*
	Komponententest für Lauflichtprojekt mit Button
    Button Test
    
    Datum:		10.11.2022
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse:		INF20s
    Version:	V1
*/

#define Button 6

int buttonState = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(Button, INPUT);
}

void loop()
{ 
  // Lesen des digitalen Pins
  buttonState = digitalRead(Button);
  // Ausgabe des Button-Status
  Serial.println(buttonState);
  delay(1000); // 1s Delay
}