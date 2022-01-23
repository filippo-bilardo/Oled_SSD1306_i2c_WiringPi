/* *****
Demo for ssd1306 i2c driver for  Raspberry Pi 
https://github.com/iliapenev/ssd1306_i2c 
g++ demo.cpp ssd1306.cpp -lwiringPi -o demo
***** */
#include <stdio.h>
#include "ssd1306.h"
#include <wiringPi.h>

FB_SSD1306 disp;

int main(void) {ls

	disp.begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);

	disp.display(); //Adafruit logo is visible
	disp.clearDisplay();
	delay(5000);

	//const char *text = "This is demo for SSD1306 i2c driver for Raspberry Pi";
	//char text[] = "This is demo for SSD1306 i2c driver for Raspberry Pi";
	//disp.drawString(text);
	//disp.drawString("This is demo for SSD1306 i2c driver for Raspberry Pi");
	disp.display();
	delay(5000);

	disp.dim(1);
	disp.startscrollright(00,0xFF);
	delay(5000);

	disp.clearDisplay();
	disp.fillRect(10,10, 50, 20, WHITE);
	disp.fillRect(80, 10, 130, 50, WHITE);
	disp.display();

	return 0;
}
