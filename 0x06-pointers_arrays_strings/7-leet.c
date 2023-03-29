#include "main.h"
/**
 * leet - that program convert some alpha to num
 * @a: that string
 * Return: string converted
 */
char *leet(char *a)
{
	char *alpha = "aAeEoOtTlL";
	char *nums = "4433007711";
	int len = 0;
	int i;
	int j;

	while (a[len])
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (a[i] == alpha[j])
	{
	a[i] = nums[j];
	}
	}
	}

	return (a);
}
