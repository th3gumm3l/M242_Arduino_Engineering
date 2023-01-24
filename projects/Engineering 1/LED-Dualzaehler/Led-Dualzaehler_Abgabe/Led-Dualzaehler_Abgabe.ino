/*
	Abgabe von LED-Dualzählerprojekt
        
    Datum:		15.11.2022
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse:		INF20s
    Version:	V1
    Board: 		Arduino Uno
*/

byte binwert;  // definiert die Variable "binwert" als byte

void setup() {
  Serial.begin(9600);  //Serielle Ausgabe einleiten zum debuggen

  for (int pins = 2; pins < 6; pins++) {
    pinMode(pins, OUTPUT);    // PINs 2-5 definieren
    digitalWrite(pins, LOW);  // PINs direkt ausschalten
  }
}

void loop() {
  for (int zaehler = 0; zaehler < 16; zaehler++) {  //zählt von 0 bis 15 (also 16 Schritte)
    delay(1000);                                    // wartet eine Sekunde, als inputdelay
    binwert = byte(zaehler);                        // schreibt die aktuelle Zahl als binärwert in die Variable binwert
    Serial.println(binwert, BIN);                   // gibt den aktuellen binärwert Seriell aus (nur zum debuggen)

    for (int n = 0; n < 4; n++)  // zählt von 0 bis 3 (4 Schritte) um jedes einzelne bit des halbbytes abzufragen
    {
      if (bitRead(binwert, n) == 1)  // wenn das aktuelle bit eine eins ist
      {
        digitalWrite(n + 2, HIGH);  // setze den entsprechenden PIN auf 1
      }

      else {
        digitalWrite(n + 2, LOW);  // ansonsten setze den PIN auf 0
      }
    }
  }
}