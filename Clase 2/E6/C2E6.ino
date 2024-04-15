int ledPin = 2;
int buttonPin = 3;
int ledState = LOW; 

void setup() {
    Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    ledState = !ledState; 

    digitalWrite(ledPin, ledState);
    
    delay(200);  
  }
}
