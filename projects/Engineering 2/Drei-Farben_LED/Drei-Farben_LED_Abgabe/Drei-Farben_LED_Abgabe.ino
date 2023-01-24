/*
	Abgabe von Drei-Farben-LED Projekt
    
    Datum:		01.12.2022
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse:		INF20s
    Version:	V1
    Board: 		Arduino Uno
*/
#define greenLight 3
#define blueLight 5
#define redLight 6

int p=1000; // p ist eine Pause mit 1000ms also 1 Sekunde
int counter = 0;
int brightness1a = 255; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int brightness1b = 255; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int brightness1c = 255; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int dunkel = 0; // Zahlenwert 0 bedeutet Spannung 0V – also LED aus

void setup()
{
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
}

void loop()
{
  if(counter < 6)
  {
  	analogWrite(blueLight, brightness1a); // blau einschalten
    delay(p); // pa
    analogWrite(blueLight, dunkel); // blau ausschalten
    analogWrite(redLight, brightness1b); // rot einschalten
    delay(p); // pause
    analogWrite(redLight, dunkel); // rotausschalten
    analogWrite(greenLight, brightness1c); // gruen einschalten
    delay(p); // pause
    analogWrite(greenLight, dunkel); // gruenausschalten
    counter++;
  }
}
