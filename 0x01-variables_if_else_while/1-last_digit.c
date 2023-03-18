#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - that app declare the last digit in int
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", last);
	return (0);
}
