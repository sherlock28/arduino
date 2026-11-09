int readVal;
int light;

const int PIN_POT = A0;
const int PIN_LED = 10;
const int DT = 200;


void setup()
{
  Serial.begin(9600);
  pinMode(PIN_POT, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  readVal = analogRead(PIN_POT);
  light = map(readVal, 0, 1023, 0, 255);
  Serial.print("Valor leido: ");
  Serial.print(readVal);
  Serial.print(" - valor mapeado: ");
  Serial.println(light);
  analogWrite(PIN_LED, light);
  delay(DT);
}