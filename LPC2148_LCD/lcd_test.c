#include <LPC214X.H>
#include "ARM_PIN.H"
#include "lcd8bit_arm.h"

int main(void)
{
	DIRPIN0 = 0xFFFFFFFF;
	lcd_init();
	lcd_string("Savani");
	lcd_cmd(0xC0+6);
	lcd_string("Nikunj");
	while(1);
}
