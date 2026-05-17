#include <U8g2lib.h>

// SSD1306 SPI
U8G2_SSD1306_128X64_NONAME_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/10, /* dc=*/8, /* reset=*/9);

// SH1106 SPI
// U8G2_SH1106_128X64_NONAME_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/10, /* dc=*/8, /* reset=*/9);

void setup() {
  u8g2.begin();
}

void loop() {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.drawStr(0,10,"Hola Rodolfo!");
  u8g2.sendBuffer();
  delay(1000);
}
