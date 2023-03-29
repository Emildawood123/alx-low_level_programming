#include "main.h"
/**
 * string_toupper - that change the string to upper
 * @a: that is string
 * Return: string(upper)
 */
char *string_toupper(char *a)
{
	int len = 0;
	int i;

	while (a[len])
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	if (a[i] >= 97 && a[i] <= 122)
	{
	a[i] = a[i] - 32;
	}
	}
	return (a);
}
