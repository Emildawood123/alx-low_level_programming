#include <stdio.h>
/**
 * main - that to hundred without ascading
 * Return:0 (Success)
 */
int main(void)
{
	int i;

	for(i = 567; i < 790; i++)
	{
	putchar(i % 10 +'0');
	putchar(i / 10 + '0')
	putchar(i / 100 +'0');
	putchar(i / 1000 +'0');
	}
	return (0);
}
