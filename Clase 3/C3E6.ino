//crear un arreglo con los número impares entre 0 y 100.

void setup() {
  Serial.begin(9600);
}

void loop() {
  int impares[50];
  int index = 0;

  for (int i = 0; i < 100; i++) {
    if (i % 2 != 0) {
      impares[index] = i;
      index++;
    }
  }

  Serial.println("Numeros impares entre 0 y 99:");
  for (int j = 0; j < index; j++) {
    Serial.println(impares[j]);
  }

  while (true);
}