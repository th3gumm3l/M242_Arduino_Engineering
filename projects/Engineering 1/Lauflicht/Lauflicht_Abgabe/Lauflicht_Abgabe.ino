/*
	Abgabe von Lauflichtprojekt
    
  Datum:		03.11.2022
  Autor:		Tim Bernhard
  		    	Demian Flury
  Klasse:		INF20s
  Version:	V1
*/

// Die Pins werden an Variablen zugeordnet
#define Led1 2
#define	Led2 3
#define	Led3 4
#define Led4 5

void setup()
{
  // Der PinMode der LEDs wird als Output festgelegt
  pinMode(Led1, OUTPUT); 
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
}

void loop()
{
  digitalWrite(Led1, HIGH); //Licht ein
  digitalWrite(Led2, LOW); //Licht aus
  digitalWrite(Led3, LOW); //Licht aus
  digitalWrite(Led4, LOW); //Licht aus
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, HIGH);
  digitalWrite(Led4, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
}