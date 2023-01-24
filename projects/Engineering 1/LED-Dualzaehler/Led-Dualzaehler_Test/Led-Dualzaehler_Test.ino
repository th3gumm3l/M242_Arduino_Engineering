/*
	Komponententest für Led-Dualzähler
    LED Test
    
    Datum:		15.11.2022
    Autor:		Tim Bernhard
    			Demian Flury
    Klasse:		INF20s
    Version:	V1
*/

#define Led1 2
#define	Led2 3
#define	Led3 4
#define Led4 5

void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);

}

void loop()
{
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led3, HIGH);
  digitalWrite(Led4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}