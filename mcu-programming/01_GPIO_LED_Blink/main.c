#include <stdint.h>
#define REG8(a)   (*(volatile uint8_t *)(a))
#define MY_DDRB   REG8(0x37)
#define MY_PORTB  REG8(0x38)
int main(void)
{
	MY_DDRB  = 0xFF;
	MY_PORTB = 0x00;
	while (1) { }
}