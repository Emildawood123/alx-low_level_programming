#include "main.h"
/**
 * _isdigit - that check the para is num or no
 * @c: that is para
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
