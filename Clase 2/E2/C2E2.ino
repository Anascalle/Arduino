//Intercalado de 2 led con botón.

int ledPin1 = 2;
int ledPin2 = 3;
int buttonPin = 4;
bool ledState = LOW;  

void setup() {
    Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    ledState = !ledState;  

   
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);

    
    if (ledState == LOW) {
      digitalWrite(ledPin1, HIGH);  
    } else {
      digitalWrite(ledPin2, HIGH);  
    }

    delay(200); 
  }
}