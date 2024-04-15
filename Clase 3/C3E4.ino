//Secuencia de nombres de un arreglo en la consola serial.

String nombres[] = {"Daniel", "David", "Salome", "Ana"};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < sizeof(nombres) / sizeof(nombres[0]); i++) {
    Serial.println(nombres[i]);
    delay(1000);
  }
  delay(500);
}
