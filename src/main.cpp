#include <M5Core2.h>
#include "../images/MachineBackground.c"

void setup() {
  M5.begin(); 
  M5.Lcd.fillScreen(WHITE); 
  delay(500); 
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setCursor(10, 10); //Move the cursor position to (x,y).  移动光标位置到 (x,y)处
  M5.Lcd.setTextColor(WHITE); //Set the font color to white.  设置字体颜色为白色
  M5.Lcd.setTextSize(3);  //Set the font size.  设置字体大小
  M5.Lcd.printf("Display Test!");  //Serial output format string.  输出格式化字符串
}                                                         // Construct a triangle with (x1,y1) (x2,y2) (x3,y3) as its vertices

void loop()
{
  /*
  unsigned long d = millis();
  int w3 = M5.Lcd.width() / 3;
  M5.Lcd.fillRect(0, 0, w3, M5.Lcd.height(), random(0xfffe));
  M5.Lcd.fillRect(w3, 0, w3, M5.Lcd.height(), random(0xfffe));
  M5.Lcd.fillRect(w3*2, 0, w3, M5.Lcd.height(), random(0xfffe));
  M5.update();  //Read the press state of the key.  读取按键 A, B, C 的状态
  unsigned long delta = millis() - d;
  M5.Lcd.setCursor(10, 10); //Move the cursor position to (x,y).  移动光标位置到 (x,y)处
  M5.Lcd.setTextColor(WHITE, BLACK);
  M5.Lcd.printf("FPS: %d", 1000 / delta);
  */
  unsigned long d = millis();
//  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.drawBitmap(0, 0, 320, 240, image_data_MachineBackground);
  unsigned long delta = millis() - d;
  M5.Lcd.setCursor(10, 10); //Move the cursor position to (x,y).  移动光标位置到 (x,y)处
  M5.Lcd.setTextColor(WHITE, BLACK);
  M5.Lcd.printf("FPS: %d", 1000 / delta);
}
