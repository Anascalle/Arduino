//Secuencia de números de 1 a 10 en la consola serial.

void setup() {
  Serial.begin(9600);  
}

void loop() {
  for (int i = 1; i <= 10; i++) {
    Serial.println(i);  
    delay(500);  
  }
  while (true);
}