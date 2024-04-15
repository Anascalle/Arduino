//Secuencia de 5 leds ascendente conectados a los pines 3 4 5 6 7.

int leds[] = {3, 4, 5, 6, 7};
int numLeds = 5;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH); 
    delay(500); 
    digitalWrite(leds[i], LOW); 
  }
}