//Secuencia de los números pares 6 al 22

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  for (int i = 6; i <= 22; i += 2) {
    
    Serial.println(i);
    
    delay(1000);
  }
}