/****** bbbb
Demo for ssd1306 i2c driver for  Raspberry Pi 
https://github.com/iliapenev/ssd1306_i2c 
gcc demo_i2c.c ssd1306_i2c.c -lwiringPi -o demo_i2c 
******/

#include "ssd1306_i2c.h"
#include <wiringPi.h>

void main() {

	ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);

	ssd1306_display(); //Adafruit logo is visible
	ssd1306_clearDisplay();
	delay(2000);

	char* text = "This is demo for SSD1306 i2c driver for Raspberry Pi";
	ssd1306_drawString(text);
	ssd1306_display();
	delay(5000);

	ssd1306_dim(1);
	ssd1306_startscrollright(00,0xFF);
	delay(5000);

	ssd1306_clearDisplay();
	ssd1306_fillRect(10, 10, 50, 20, WHITE);
	ssd1306_fillRect(80, 10, 130, 50, WHITE);
	ssd1306_display();
}
