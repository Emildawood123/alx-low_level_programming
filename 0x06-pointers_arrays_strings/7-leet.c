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
	int j;

	while (a[len])
	{
	for (j = 0; j < 10; j++)
	{
	if (a[len] == alpha[j])
	{
	a[len] = nums[j];
	}
	}
	len++;
	}

	return (a);
}
