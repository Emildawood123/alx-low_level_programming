#include <stdio.h>
/**
 * main - that to hundred without ascading
 * Return:0 (Success)
 */
int main(void)
{
	int i;

	for(i = 10; i < 790; i++)
	{
	if (i / 10 + '0' < i % 10 || i / 100 + '0' < (i / 10) % 10 + '0' || (i / 10)% 10 + '0' < i % 10 + '0')
	{
	continue;
	}
	else{
	putchar(i % 10 + '0');
	}
	}
	return (0);
}
