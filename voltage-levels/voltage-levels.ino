int RED_LED_PIN = 10;
int YELLOW_LED_PIN = 9;
int GREEN_LED_PIN = 8;
int PIN_OUTPUT_VOLTAGE = A0;
float outputVoltage;

void setup() {
  Serial.begin(9600);
  pinMode(GREEN_LED_PIN, OUTPUT);                         // configure GREEN LED pin as output
  pinMode(YELLOW_LED_PIN, OUTPUT);                        // configure YELLOW LED pin as output
  pinMode(RED_LED_PIN, OUTPUT);                           // configure RED LED pin as output
  pinMode(PIN_OUTPUT_VOLTAGE, INPUT);                     // configure analog input pin
}

void loop() {
  int rawValue = analogRead(PIN_OUTPUT_VOLTAGE);          // read raw value (0–1023)
  outputVoltage = (rawValue * 5.0) / 1023.0;              // convert to voltage (0–5 V)

  // --- Voltage ranges with LED indicators ---
  if (outputVoltage < 3.0) {
    digitalWrite(GREEN_LED_PIN, HIGH);                    // turn GREEN LED on
    digitalWrite(YELLOW_LED_PIN, LOW);                          
    digitalWrite(RED_LED_PIN, LOW);                          
    Serial.print("STATUS: LOW  | ");                      // improved print
  }
  else if (outputVoltage >= 3.0 && outputVoltage <= 4.0) {
    digitalWrite(GREEN_LED_PIN, LOW);                           
    digitalWrite(YELLOW_LED_PIN, HIGH);                   // turn YELLOW LED on             
    digitalWrite(RED_LED_PIN, LOW);      
    Serial.print("STATUS: MEDIUM | ");                    // improved print
  }
  else if (outputVoltage > 4.0) {
    digitalWrite(GREEN_LED_PIN, LOW);                           
    digitalWrite(YELLOW_LED_PIN, LOW);                    
    digitalWrite(RED_LED_PIN, HIGH);                      // turn RED LED on
    Serial.print("STATUS: HIGH | ");                      // improved print
  }

  // --- Print measured voltage with 2 decimals ---
  Serial.print("Measured Voltage: ");
  Serial.print(outputVoltage, 2);                         // print voltage with 2 decimals
  Serial.println(" V");

  delay(200);                                             // small delay for easier reading
}
