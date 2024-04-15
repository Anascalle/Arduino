//Parpadeo intercalado de 1 segundo en 2 leds.

int ledPin1 = 1;
int ledPin2 = 2;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH);  
  delay(1000);                   
  digitalWrite(ledPin1, LOW);         

  digitalWrite(ledPin2, HIGH);  
  delay(1000);                   
  digitalWrite(ledPin2, LOW);  
                  
}
