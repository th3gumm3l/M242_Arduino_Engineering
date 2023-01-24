/*
	Abgabe des LCD4 Projekts

	Datum:       12.01.23
	Autoren:     Tim Bernhard
    	         Demian Flury
	Klasse:      INF20s
	Version:     V1
	Board:       Arduino Uno
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // Pins des Displays an die entsprechenden Pins des Arduino anschließen

void setup() {
  lcd.begin(16, 2);                 // Anzahl der Spalten und Zeilen des Displays festlegen
  lcd.setCursor((16 - 11) / 2, 0);  // Position für Überschrift "LED-Zähler" berechnen
  lcd.print("LED-Zähler");          // Überschrift auf dem Display ausgeben

  for (int pins = 2; pins < 6; pins++) {
    pinMode(pins, OUTPUT);    // PINs 2-5 definieren
    digitalWrite(pins, LOW);  // PINs direkt ausschalten
  }
}

void loop() {
  for (int zaehler = 0; zaehler < 8; zaehler++) {           //zählt von 0 bis 7 (also 8 Schritte)
    delay(1000);                                            // wartet eine Sekunde, als inputdelay
    byte binwert = byte(zaehler);                           // schreibt die aktuelle Zahl als binärwert in die Variable binwert
    lcd.setCursor((16 - String(zaehler).length()) / 2, 1);  // Position für Dualzahl berechnen
    lcd.print(zaehler);                                     // Dualzahl auf dem Display ausgeben

    for (int n = 0; n < 4; n++)  // zählt von 0 bis 3 (4 Schritte) um jedes einzelne bit des halbbytes abzufragen
    {
      if (bitRead(binwert, n) == 1)  // wenn das aktuelle bit eine eins ist
      {
        digitalWrite(n + 2, HIGH);  // setze den entsprechenden PIN auf 1
      } else {
        digitalWrite(n + 2, LOW);  // ansonsten setze den PIN auf 0
      }
    }
  }
}