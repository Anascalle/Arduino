//Cambio de estado secuencia con 6 leds ->
//estado 1: secuencia ascendente.
//estado 2: secuencia descendente.



int ledPins[] = {2, 3, 4, 5, 6, 7};  
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);
int buttonPin = 8;  
int currentState = 1;  
int currentLED = 0;  

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
    currentLED = (currentState == 1) ? 0 : numLEDs - 1;

    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], LOW);
    }

    if (currentState == 1) {
      for (int i = 0; i < numLEDs; i++) {
        digitalWrite(ledPins[i], HIGH);
        delay(200);
        digitalWrite(ledPins[i], LOW);
      }
    } else if (currentState == 2) {
      for (int i = numLEDs - 1; i >= 0; i--) {
        digitalWrite(ledPins[i], HIGH);
        delay(200);
        digitalWrite(ledPins[i], LOW);
      }
    }
  }
}