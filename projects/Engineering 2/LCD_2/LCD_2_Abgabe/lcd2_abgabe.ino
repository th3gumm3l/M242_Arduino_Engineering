/*
	Abgabe von LCD2 Projekt
    
    Datum:		22.12.22
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse: 	INF20s
    Version: 	V1
    Board:		Arduino Uno
*/

#include <LiquidCrystal.h> // Library integrieren
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD definieren

int sec;

void setup() 
{
	lcd.begin(16, 2); //LCD starten
	lcd.print("Z\204hler 0 bis 20:"); // Startdisplayzeile
}

void loop() 
{
  lcd.setCursor(0, 1); // Cursorposition definieren
  delay(300);
  
  if (sec >= 20) 
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Z\204hler 0 bis 20:");
    lcd.setCursor(0,1);
    sec = 0;
    lcd.print(sec);
  }
    
  else 
  {
    sec++;
    lcd.print(sec);
  }
}