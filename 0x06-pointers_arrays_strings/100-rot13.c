#include "main.h"
/**
 * rot13 - that program convert string by rot13
 * @a: that is a string
 * Return: coverted string
 */
char *rot13(char *a)
{
	int len = 0;
	char *bef = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *aft = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (a[len])
	{
	for (i = 0; i < 52; i++)
	{
	if (a[len] == bef[i])
	{
	a[len] = aft[i];
	break;
	}
	}
	len++;
	}
	return (a);
}
