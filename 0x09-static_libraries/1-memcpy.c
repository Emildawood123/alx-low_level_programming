#include "main.h"
/**
 * _memcpy - that like before one it but change arranged
 * @dest: that main
 * @src: taken
 * @n: till
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
