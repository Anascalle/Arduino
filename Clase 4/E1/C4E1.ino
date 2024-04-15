//Localización de una fuente de luz con 4 fotoceldas en línea, debe indicar en qué tramo está la fuente de luz.

const int ldrPins[] = {A0, A1, A2, A3};
const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int highestValue = 0;
  int highestIndex = -1;

  for (int i = 0; i < 4; i++) {
    int sensorValue = analogRead(ldrPins[i]);
    if (sensorValue > highestValue) {
      highestValue = sensorValue;
      highestIndex = i;
    }
  }

  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPin, i == highestIndex ? HIGH : LOW);
  }

  Serial.println("Fuente de luz en fotocelda: " + String(highestIndex));
  delay(100);
}


