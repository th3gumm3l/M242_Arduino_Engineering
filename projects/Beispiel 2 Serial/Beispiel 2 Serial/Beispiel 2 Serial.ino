/*
  Beispiel 2 Serialmonitor
  zeigt Ausgabe von Var. mittels Var.-Namen
  Tim Bernhard
  Oktober 22
*/
int a = 5;
int b = 6;
int summe;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  summe = a+b;  
  Serial.println(summe);
  delay(1000);
}
