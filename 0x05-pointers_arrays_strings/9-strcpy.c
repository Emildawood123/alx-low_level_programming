#include "main.h"
/**
 * _strcpy - that copy fun
 * @dest: the var
 * @src: the value
 * Return: the value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
