//Parpadeo de 2 segundos en 2 leds (más lento).

int ledPin1 = 1;
int ledPin2 = 2;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH);
   digitalWrite(ledPin2, HIGH);
  delay(2000);                   
  digitalWrite(ledPin1, LOW); 
  digitalWrite(ledPin2, LOW);
  delay(2000);                   
}
