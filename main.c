#include <xc.h>
#include "pic16f18854.h"
#include "init.h"
#include "I2C_LCD.h"

#define SLAVE_ADD 0x4E
void main(void) {
    init();
    TRISB0=0;
    LCD_Init(SLAVE_ADD); // Initialize LCD module with I2C address = 01001110
    LCD_Set_Cursor(1, 1);
    LCD_Write_String(" 1");
}

