#include "main.h"
/**
 * factorial - that fun return factorial
 * @n: that number
 * Return: factorial number
 */
int factorial(int n)
{
	if (n > 1)
	{
	return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
	return (-1);
	}
	return (1);
}
