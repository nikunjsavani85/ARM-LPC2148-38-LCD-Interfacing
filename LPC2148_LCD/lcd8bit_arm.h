//********************************************************************
//********************************************************************
//
//									ARM 8-Bit LCD DECLARATION													
//														By																			
//											Nikunj Savani																	
//
//********************************************************************
//********************************************************************

#include <LPC214X.H>

#ifndef __lcd8bit_arm_h
#define __lcd8bit_arm_h

#define LCD (0xFF<<8)
#define RS (1<<5)
#define RW (1<<6)
#define EN (1<<7)

void delay(unsigned int time);

void lcd_init(void);
void lcd_string(char *s);
void lcd_cmd(unsigned char cmd);
void lcd_data(unsigned int _data);

void lcd_cmd(unsigned char cmd)
{
	CLRPIN0 |= (RS|EN|LCD);
	RPIN0 = (cmd<<8);
// 	IO0SET|=(cmd<<8);
	CLRPIN0 |=RS;
	SETPIN0 |=EN;
	delay(2);
	CLRPIN0 |=EN;
	delay(3);
}

void lcd_data(unsigned int _data)
{
	CLRPIN0 |= (RS|EN|LCD|RW);
	RPIN0 = (_data<<8);
// 	IO0SET|=(_data<<8);
	SETPIN0|=RS;
	SETPIN0|=EN;
	delay(2);
	CLRPIN0|=EN;
}

void lcd_string(char *s)
{
	while(*s)
	{
		lcd_data(*s);
		s++;
	}
}

void lcd_init(void)
{
	lcd_cmd(0x38);
	lcd_cmd(0x0F);
	lcd_cmd(0x06);
	lcd_cmd(0x01);
	lcd_cmd(0x80);
}

void delay(unsigned int time)
{
	unsigned int t1,t2;
	for(t1=0;t1<time;t1++)
	for(t2=0;t2<1275;t2++);
}

#endif
