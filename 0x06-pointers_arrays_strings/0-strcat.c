#include "main.h"
/**
 * _strcat - that return concat 2 char
 * @dest: that is first
 * @src: that is second
 * Return: concat
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1] != '\0')
	{
	len1++;
	}
	while (src[len2] != '\0')
	{
	len2++;
	}
	for (i = 0; i <= len2; i++)
	{
	dest[i + len1] = src[i];
	}
	return (dest);
}
