//Secuencia de 8 leds desde los bordes hasta el centro y de regreso

int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int numLEDs = 8;                         

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);         
    digitalWrite(ledPins[numLEDs - 1 - i], HIGH); 
    delay(500);                            
  }

  
  for (int i = 3; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);          
    digitalWrite(ledPins[numLEDs - 1 - i], LOW); 
    delay(500);                             
  }

  delay(500); 
}
