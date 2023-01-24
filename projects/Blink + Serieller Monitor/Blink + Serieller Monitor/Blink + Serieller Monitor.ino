/*
  Programm:   Blink-Applikation (lässt LED im Zeitabstand blinken und gibt Zustand im Seriellen Monitor an)
  Boardinformationen:   Arduino-UNO
  LED = onBoadLED - kein GPIO nötig

  Autor:    Tim Bernhard
*/



// the setup function runs once when you press reset or power the board
void setup() {
  // PinMode von der eingebauten LED wird auf OUTPUT gesetzt
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT); //Der 13. Pin auf dem OnBoad Arduino-UNO steht für die LED, welche darauf eingebaut ist.
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("LED an");
  delay(2000);                       // wait for a second //Problem mit delay: Während diesem Delay kann der Mikrokontroller nichts ausführen.
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("LED aus");
  delay(2000);                        // wait for a second
}