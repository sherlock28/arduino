int PIN_OUTPUT_VOLTAGE = A0;
float outputVoltage;

void setup() {
  pinMode(PIN_OUTPUT_VOLTAGE, INPUT);
  Serial.begin(9600);
}

void loop() {
  int rawValue = analogRead(PIN_OUTPUT_VOLTAGE);  // value between 0 and 1023
  outputVoltage = (rawValue * 5.0) / 1023.0;      // convert to voltage (0–5 V)
  Serial.print(outputVoltage);                    // print voltage in 0–5 V range
  Serial.println(" V");
  delay(200);
}
