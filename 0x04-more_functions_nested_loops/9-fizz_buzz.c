#include <stdio.h>
/**
 * main - that program print fizz if /3 buzz /5 fizzbuzz /3 and /5 else num
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz");
	}
	else
	{
	printf("%i", i);
	}
	if (i != 100)
	{
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
