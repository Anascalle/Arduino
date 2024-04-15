//Aleatorio de 5 leds con botón

int buttonPin = 4; 
int ledPins[] = {2, 3,5, 6,7}; 
int numLeds = 5;

int buttonState = 0;

void setup() {
    Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);  
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);     
  }
  randomSeed(digitalRead(8));        
}

void loop() {
  buttonState = digitalRead(buttonPin);  

  if (buttonState == LOW) {

    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }


    int randomLed = random(numLeds);       
    digitalWrite(ledPins[randomLed], HIGH); 
    delay(200);                              
  } else {
    
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
