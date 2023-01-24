/*
  Beispiel 3 Serialmonitor
  zeigt Ausgabe von einem string in Kombination mit ener Var.
  Tim Bernhard
  Oktober 22
*/

int a = 3;
int b = 4;
int summe;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  summe = a+b;
  Serial.print("Summe a+b=")  
  Serial.println(summe);
  delay(1000);
}

