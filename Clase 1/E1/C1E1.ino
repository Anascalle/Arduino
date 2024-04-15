//Parpadeo de 1/2 segundo por ciclo (Rápido)
int ledPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); 
  delay(500);                 
  digitalWrite(ledPin, LOW);  
  delay(500);                 
}

