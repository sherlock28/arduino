TaskHandle_t Task0;

void setup() {
  Serial.begin(115200);
  xTaskCreatePinnedToCore(loop0, "Task_0", 1000, NULL, 1, &Task0, 0);
}

void loop0(void *parameter) {
  for(;;) {
    Serial.println("\t\t\tProcess in the core #" + String(xPortGetCoreID()));
    delay(300);
  }
}

void loop() {
  Serial.println("Process in the core #" + String(xPortGetCoreID()));
  delay(1200);
}

