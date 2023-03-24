#include <stdio.h>
#include <math.h>
/**
 * main - that print the prime number
 * Return: alaways 0
 */
int main(void)
{
	long n = 612852475143;
	long i, maxf;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
	if (n % i == 0)
	{
	maxf = n / i;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
