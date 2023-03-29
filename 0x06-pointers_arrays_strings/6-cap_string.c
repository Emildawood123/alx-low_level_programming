#include "main.h"
/**
 * cap_string - that captalize
 * @a: that is string will changed
 * Return: changed string
 */
char *cap_string(char *a)
{
	int len = 0;
	int i = 0;

	while (a[len])
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	if (a[i] == '\t')
	{
	a[i] = ' ';
	}
	if (a[i] == ' ' ||
	a[i] == '.' ||
	a[i] == '\n' ||
	a[i] == ',' ||
	a[i] == '!' ||
	a[i] == '?' ||
	a[i] == '"' ||
	a[i] == '(' ||
	a[i] == ')' ||
	a[i] == '{' ||
	a[i] == '}' ||
	a[i] == ';')
	{
	if (a[i + 1] >= 97 && a[i + 1] <= 122)
	{
	a[i + 1] = a[i + 1] - 32;
	}
	}
	}

	return (a);
}
