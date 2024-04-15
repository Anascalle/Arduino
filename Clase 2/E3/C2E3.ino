//Secuencia de 4 leds con botón.

int ledPins[] = {2, 3, 4, 5};
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);
int buttonPin = 6;
int currentLed = -1;  

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
  
    digitalWrite(ledPins[currentLed], LOW);

    currentLed = (currentLed + 1) % numLEDs;

    digitalWrite(ledPins[currentLed], HIGH);

    delay(200);
  }
}

