/*
  Programm:   Blink-Applikation (lässt LED im Zeitabstand blinken)
  Boardinformationen:   Arduino-UNO
  LED = onBoadLED - kein GPIO nötig

  Autor:    Tim Bernhard
*/



// the setup function runs once when you press reset or power the board
void setup() {
  // PinMode von der eingebauten LED wird auf OUTPUT gesetzt
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT); //Der 13. Pin auf dem OnBoad Arduino-UNO steht für die LED, welche darauf eingebaut ist.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second //Problem mit delay: Während diesem Delay kann der Mikrokontroller nichts ausführen.
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                        // wait for a second
}