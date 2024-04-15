//Localización de una fuente de luz con 4 fotoceldas en línea, debe indicar en qué tramo está la fuente de luz.


const int sensorPin = A0;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  if (sensorValue < 300) {
    setColor(255, 0, 0);
  } else if (sensorValue >= 300 && sensorValue < 700) {
    setColor(0, 255, 0);
  } else {
    setColor(0, 0, 255);
  }
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}