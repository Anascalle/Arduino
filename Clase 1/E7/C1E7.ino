// Secuencia de 4 leds rebote desde el centro.

int ledPins[] = {2, 3, 4, 5}; 

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  digitalWrite(ledPins[1], HIGH);
  delay(500); 
  digitalWrite(ledPins[2], HIGH);
  delay(500);  
  digitalWrite(ledPins[0], HIGH);
  delay(500); 
  digitalWrite(ledPins[3], HIGH);
  delay(500); 
  digitalWrite(ledPins[3], LOW);
  delay(200);  
  digitalWrite(ledPins[0], LOW);
  delay(200); 
  digitalWrite(ledPins[2], LOW);
  delay(200); 
  digitalWrite(ledPins[1], LOW);
  delay(200); 
}

