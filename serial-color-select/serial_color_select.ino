String MSG = "Por favor elige un color: ";
const int PIN_RED = 13;
const int PIN_GREEN = 12;
const int PIN_BLUE = 11;
const int DT = 400;
String color;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);
}

void loop() {
  Serial.println(MSG);
  while (Serial.available() == 0) {}

  color = Serial.readString();
  while (Serial.available() > 0) {
    Serial.read();  // descarta el \n, \r o lo que haya quedado
  }

  if (color.equalsIgnoreCase("rojo")) {
    digitalWrite(PIN_RED, HIGH);
    digitalWrite(PIN_GREEN, LOW);
    digitalWrite(PIN_BLUE, LOW);
  }
  else if (color.equalsIgnoreCase("verde")) {
    digitalWrite(PIN_RED, LOW);
    digitalWrite(PIN_GREEN, HIGH);
    digitalWrite(PIN_BLUE, LOW);
  }
  else if (color.equalsIgnoreCase("azul")) {
    digitalWrite(PIN_RED, LOW);
    digitalWrite(PIN_GREEN, LOW);
    digitalWrite(PIN_BLUE, HIGH);
  }
  else {
    Serial.println("Color no válido.");
  }
}