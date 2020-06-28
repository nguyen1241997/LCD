#include "stm32f4xx.h"

#define LCD20xN

#define RS_PORT	GPIOA
#define RS_PIN	GPIO_PIN_0

#define EN_PORT	GPIOA
#define EN_PIN	GPIO_PIN_1

#define D4_PORT	GPIOA
#define D4_PIN	GPIO_PIN_2

#define D5_PORT	GPIOA
#define D5_PIN	GPIO_PIN_3

#define D6_PORT	GPIOA
#define D6_PIN	GPIO_PIN_4

#define D7_PORT	GPIOA
#define D7_PIN	GPIO_PIN_5

#define Pin_low(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_RESET);
#define Pin_high(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_SET);

void lcd_init(void);
void lcd_clear(void);
void lcd_send(uint8_t mode, uint8_t data);
void lcd_write(uint8_t x, uint8_t y, int8_t *data);
	