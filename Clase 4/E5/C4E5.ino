//Medición de nivel de iluminación control de servo motor, baja iluminación 0 grados, alta iluminación 180 grados con sus respectivos intermedios.

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}	

void loop()
{
  int valorPotenciometro = analogRead(A0);
  Serial.println(valorPotenciometro);
  if(valorPotenciometro > 0 && valorPotenciometro < 180){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
  delay(500);
}