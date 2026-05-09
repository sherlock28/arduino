int DOT = 300;
int DASH = 600;
int LED_BUILDOUT = 10;
int LETTER_INTERVAL = 1300;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DOT);


  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DASH);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DASH);
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DASH);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DASH);
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DASH);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DASH);


  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILDOUT, LOW);
  delay(DOT);

  delay(LETTER_INTERVAL);
}
