String MSG = "Por favor ingrese el número de parpadeos: ";
const int PIN_LED = 8;
const int DT = 400;
int blinkTimes;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  Serial.println(MSG);
  while (Serial.available() == 0) { }

  blinkTimes = Serial.parseInt();
  while (Serial.available() > 0) {
    Serial.read();   // descarta el \n, \r o lo que haya quedado
  }

  for (int i = 0 ; i < blinkTimes ; i++) {
    digitalWrite(PIN_LED, HIGH);
    delay(DT);
    digitalWrite(PIN_LED, LOW);
    delay(DT);
  }
}