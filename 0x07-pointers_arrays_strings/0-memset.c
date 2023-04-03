#include "main.h"
/**
 * _memset - that is funcation change element value
 * @s: arr
 * @b: new value
 * @n: till
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
