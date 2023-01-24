/*
	Abgabe von LCD3 Projekt
    
    Datum:		12.01.23
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse: 	INF20s
    Version: 	V1
    Board:		Arduino Uno
*/
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Pins des Displays an die entsprechenden Pins des Arduino anschließen

void setup() {
  lcd.begin(16, 2); // Anzahl der Spalten und Zeilen des Displays festlegen
  for (int i = 65; i <= 90; i++) { // Schleife von A bis Z
    lcd.setCursor(i-64, 0); // Position auf der 1. Zeile und i-ter Spalte festlegen
    lcd.print((char)i); // Buchstabe an dieser Position ausgeben
    delay(200); // 200 ms Verzögerung
  }
  for (int i = 97; i <= 122; i++) { // Schleife von a bis z
    lcd.setCursor(i-96, 1); // Position auf der 2. Zeile und i-ter Spalte festlegen
    lcd.print((char)i); // Buchstabe an dieser Position ausgeben
    delay(200); // 200 ms Verzögerung
  }
}

void loop() {
  
}
