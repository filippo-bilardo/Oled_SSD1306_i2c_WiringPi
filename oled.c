/******
Demo for ssd1306 i2c driver for  Raspberry Pi 
https://github.com/iliapenev/ssd1306_i2c 
gcc oled.c ssd1306_i2c.c -lwiringPi -o oled
******/

#include "ssd1306_i2c.h"
#include <wiringPi.h>
#include <stdlib.h>  // exit
#include <unistd.h>  // sleep
#include <stdio.h>   // printf

int main(int argc, char **argv)  {

	ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
	ssd1306_clearDisplay();
	if(argc < 2) {
		printf("Numero parametri sbagliato");
		exit(1);
	}
	ssd1306_drawString(argv[1]);
	ssd1306_display();
}