/*
	Abgabe von LED-Dualzählerprojekt mit Button
    
    Datum:		16.11.2022
    Autor:		Tim Bernhard
    			    Demian Flury
    Klasse:		INF20s
    Version:	V1
    Board: 		Arduino Uno
*/

#define Button 6

boolean buttonState = 0;
byte binwert;  // definiert die Variable "binwert" als byte
int zaehler = 0;

void setup() {
  Serial.begin(9600);  //Serielle Ausgabe einleiten zum debuggen
  pinMode(Button, INPUT);

  for (int pins = 2; pins < 6; pins++) {
    pinMode(pins, OUTPUT);    // PINs 2-5 definieren
    digitalWrite(pins, LOW);  // PINs direkt ausschalten
  }
}

void loop() {
  buttonState = digitalRead(Button);
  if (buttonState == true && zaehler < 16) {  // wartet eine Sekunde, für die Optik
    delay(200);                               // wartet eine Sekunde, als inputdelay
    binwert = byte(zaehler);                  // schreibt die aktuelle Zahl als binärwert in die Variable binwert
    Serial.println(binwert, BIN);             // gibt den aktuellen binärwert Seriell aus (nur zum debuggen)
    delay(100);

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
    zaehler++;
  }
}