//Correspondencia 3 botones con 3 leds.

int buttonPin1 = 7;
int buttonPin2 = 6;
int buttonPin3 = 4;
int ledPin1 = 5;
int ledPin2 = 3;
int ledPin3 = 2;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);

  if (buttonState1 == LOW) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

  if (buttonState2 == LOW) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }

  if (buttonState3 == LOW) {
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin3, LOW);
  }
}
