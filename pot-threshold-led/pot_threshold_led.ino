const int PIN_POT = A0;
const int PIN_LED = 2;
const int DT = 100;
int potVal;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_POT, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  potVal = analogRead(PIN_POT);
  Serial.println(potVal);
  delay(DT);
  while(potVal > 1000) {
    digitalWrite(PIN_LED, HIGH);
    potVal = analogRead(PIN_POT);
  }
  digitalWrite(PIN_LED, LOW);
}