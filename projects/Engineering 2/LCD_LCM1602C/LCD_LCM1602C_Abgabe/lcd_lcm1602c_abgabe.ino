/*
	Abgabe von LCD_LCM1602C Projekt
    
    Datum:		22.12.22
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse: 	INF20s
    Version: 	V1
    Board:		Arduino Uno
*/

#include <LiquidCrystal.h> // Library integrieren
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD definieren

void setup() {
	lcd.begin(16, 2); //LCD starten
	lcd.print("Arduino M242"); // Startdisplayzeile
}
void loop() {
	lcd.setCursor(0, 1); // Cursorposition definieren
	lcd.print(millis() / 1000); // Zeit seit RESET drucken
}