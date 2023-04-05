#include "main.h"
/**
 * _sqrt- that is program give you a sqrt number
 * @n: that is number taken form anthor function
 * @i: that is tester
 * Return: sqrt number
 */
int _sqrt(int n, int i);
int _sqrt(int n, int i)
{
	if (n > i * i)
	{
	return (_sqrt(n, i + 1));
	}
	else if (n == i * i)
	{
	return (i);
	}
	else
	{
	return (-1);
	}
}
/**
 * _sqrt_recursion - return anthor fun because we need another para
 * @n: this is number
 * Return: anthor function
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

