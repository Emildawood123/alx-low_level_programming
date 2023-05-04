#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - that program return x**y
 * @x: that is number
 * @y: this is power
 * Return: x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
