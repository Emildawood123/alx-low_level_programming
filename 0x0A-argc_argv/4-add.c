#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * isnum - know number or no
 * @s: that string
 * Return: sum
 */
int isnum(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
	if (!(s[i] >= '0' && s[i] <= '9'))
	{
	return (0);
	}
	i++;
	}
	return (1);
}
/**
 * main - that app to add num to anthor num
 * @argc: that is a int
 * @argv: that is a char
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int ch = 1;
	int res = 0;

	while (ch != argc)
	{
	if (isnum(argv[ch]) == 0)
	{
	printf("Error\n");
	return (0);
	}
	else
	{
	res = res + atoi(argv[ch]);
	ch++;
	}
	}
	printf("%i\n", res);
	return (1);
}
