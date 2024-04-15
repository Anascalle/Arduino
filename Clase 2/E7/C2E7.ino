//Cambio de estado estático con 6 leds ->
//estado 1: leds pares.
//estado 2: leds impares.

int ledPins[] = {2, 3, 4, 5, 6, 7};  
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);
int buttonPin = 8;  
int currentState = 1;  

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);  
  }
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    delay(50);

    currentState = (currentState == 1) ? 2 : 1;

    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], LOW);
    }

    if (currentState == 1) {
      for (int i = 0; i < numLEDs; i += 2) {
        digitalWrite(ledPins[i], HIGH);
      }
    } else if (currentState == 2) {
      for (int i = 1; i < numLEDs; i += 2) {
        digitalWrite(ledPins[i], HIGH);
      }
    }

    delay(200);
  }
}
