#include "main.h"
/**
 * _strncat - that return and change first parameter
 * @dest: first parameter
 * @src: second parameter
 * @n: numbers of token
 * Return: new dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1])
	{
	len1++;
	}
	while (src[len2])
	{
	len2++;
	}
	if (n > len2)
	{
	for (i = 0; i <= len2; i++)
	{
	dest[len1 + i] = src[i];
	}
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	dest[len1 + i] = src[i];
	}
	}
	return (dest);
}
