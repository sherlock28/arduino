int PIN_LED = 10;
int PIN_OUTPUT_VOLTAGE = A0;
float outputVoltage;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_OUTPUT_VOLTAGE, INPUT);
}

void loop() {
  int rawValue = analogRead(PIN_OUTPUT_VOLTAGE);   // value between 0 and 1023
  outputVoltage = (rawValue * 5.0) / 1023.0;       // convert to voltage (0–5 V)

  if(outputVoltage > 4.0) {
    digitalWrite(PIN_LED, HIGH);                   // turn LED on
    Serial.println("Voltage is HIGH (> 4V)");      // notify when voltage > 4V
  } 
  else {
    digitalWrite(PIN_LED, LOW);                    // turn LED off
    Serial.println("Voltage is LOW (< 4V)");       // notify when voltage < 4V
  }

  Serial.print("Measured: ");
  Serial.print(outputVoltage, 2);                  // print voltage with 2 decimals
  Serial.println(" V");
  delay(200);                                      // small delay for easier reading
}