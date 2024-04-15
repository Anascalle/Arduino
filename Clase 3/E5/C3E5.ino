//Secuencia de 5 leds ascendente conectados a los pines 3 5 6 8 11

const int ledPins[] = {3, 5, 6, 8, 11};
const int numLeds = 5;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}