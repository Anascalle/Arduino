//Secuencia de 6 leds sólo uno apagado.

int ledPins[] = { 2, 3, 4, 5, 6 ,7};
int offLed = 3;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 6; i++) {
    if (i != offLed) {
      digitalWrite(ledPins[i], HIGH);  
      delay(500);
    
    }
  }
  
 
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  
  delay(500);  
  
}