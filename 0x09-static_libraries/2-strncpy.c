#include "main.h"
/**
 * _strncpy - that program chage first and return it
 * @dest: this first parameter
 * @src: this second parameter
 * @n: this is how much times ?
 * Return: first after change
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
