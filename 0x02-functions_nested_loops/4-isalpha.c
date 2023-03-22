#include "main.h"
/**
 * _isalpha - that retrun zero or one
 * @c: this is aparameter
 * Return: On succes
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
