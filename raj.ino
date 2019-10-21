int BUTTON = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, LOW);
    delay(200); // Wait for 200 millisecond(s)
  } 
  else {
    digitalWrite(13, HIGH);
    delay(200); // Wait for 200 millisecond(s)
  }
}