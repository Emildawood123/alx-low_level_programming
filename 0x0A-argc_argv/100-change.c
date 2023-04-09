#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - that is program return best method
 * @argv: that is a char
 * @argc: that is a int
 * Return: best sum coins
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int num;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
	printf("0\n");
	return (0);
	}
	if (num >= 25)
	{
	res = res + ((num - (num % 25)) / 25);
	num = num % 25;
	}
	if (num >= 10 && num < 25)
	{
	res = res + ((num - (num % 10)) / 10);
	num = num % 10;
	}
	if (num >= 5 && num < 10)
	{
	res = res + ((num - (num % 5)) / 5);
	num = num % 5;
	}
	if (num >= 2 && num < 5)
	{
	res = res + ((num - (num % 2)) / 2);
	num = num % 2;
	}
	if (num == 1)
	{
	res++;
	}
	printf("%i\n", res);
	return (0);
}
