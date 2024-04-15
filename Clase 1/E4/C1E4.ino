
//Secuencia de 3 leds intercalado.

int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  delay(500);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  delay(500);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(500);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  delay(500);
}
