#define N 16
int numbers[N];

int LEDS[4] = {2, 3, 4, 5};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for (int p = 0; p < 4; p++) {
    pinMode(LEDS[p], OUTPUT);
  }

  for (int i = 0; i < N; i++) {
    numbers[i] = i;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int n = 0; n < N; n++) {
    byte binaryValue = decimalToBinary(n);
    
    Serial.print("Decimal: ");
    Serial.print(n);
    Serial.print("  Binary: ");

    for(int bit = 0; bit < 4; bit++) {
      int b = bitRead(binaryValue, bit);
      Serial.print(b);      
      digitalWrite(LEDS[bit], b);
    }

    Serial.println();

    delay(2000);
  }
}

byte decimalToBinary(int number) {
  return (byte)number;
}
