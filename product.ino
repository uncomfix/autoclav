// библиотека работы с экраном
#include <SPI.h>
#include <TFT.h>
#define cs 10
#define dc 9
#define rst 8
TFT TFTscreen = TFT(cs, dc, rst);

void setup() {
  Serial.begin(9600);
  TFTscreen.begin();
  TFTscreen.textSize(2);
  TFTscreen.setRotation(3);
  TFTscreen.background(0, 0, 0);
}

void loop() {
  TFTscreen.background(250, 250, 250);
  TFTscreen.stroke(230, 30, 230);
  TFTscreen.text("rushpil", 40, 25); // ("text", 40 (move string on X), 25 (move string on Y) )
}



// if (millis() - timing >= 5000) {
//   timing = millis();
// }