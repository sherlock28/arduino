int ANALOG_PIN = A0;
float V2 = 0;
int DELAY_TIME = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ANALOG_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogVal = analogRead(ANALOG_PIN);
  V2 = analogVal * (5.0 / 1023.0);

  Serial.print("Voltage: ");
  Serial.print(V2, 2);
  Serial.println(" V");

  delay(DELAY_TIME);
}
