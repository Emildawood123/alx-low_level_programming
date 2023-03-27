#include "main.h"
/**
 * _strlen - that program return length of str
 * @s: that is str
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
	length++;
	}
	return (length);
}
