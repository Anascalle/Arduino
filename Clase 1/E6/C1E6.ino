//Secuencia de 4 leds degradado (inician prendidos).

int ledPins[] = { 2, 3, 4,5};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH);  
  }
  
  delay(500);  
}

void loop() {
   
  for (int i = 3; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(500);
  }

  
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
  }

}