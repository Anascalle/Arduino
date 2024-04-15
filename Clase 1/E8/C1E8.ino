//Secuencia de 5 leds continuo.

int ledPins[] = {2, 3, 4, 5, 6}; 
int numLEDs = 5;                 

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT); 
  }
}

void loop() {

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); 
    delay(200);                      
    digitalWrite(ledPins[i], LOW);  
  }

 
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW); 
  }

  delay(500); 
}
