int ldrPin = A0;

int led1 = 8;

void setup()
{
  pinMode(led1, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int lightValue = analogRead(ldrPin);

  Serial.println(lightValue);

  if (lightValue < 500)
  {
    digitalWrite(led1, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
  }

  delay(500);
}
