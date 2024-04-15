//Encendido y apagado de led con botón

int ledPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if(digitalRead(3)==HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}