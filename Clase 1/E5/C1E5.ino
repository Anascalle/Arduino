//Secuencia de 3 leds sumativo.

int ledPins[] = {2, 3, 4};  
int numLEDs = 3;            

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
  }

  delay(500);

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  delay(200);
}