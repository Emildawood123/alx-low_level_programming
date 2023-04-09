#include <stdio.h>
#include <stdlib.h>
/**
 *_atoi - taht is coverter to number
 *@s: that char needed to change
 *Return: number
 */
int _atoi(char *s);
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	ni *= min;
	return (ni);
}
/**
 * main - that program print multi two nums
 * @argc: that is int
 * @argv: taht is char
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count = 1;
int result = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
while (count != argc)
{
	result = result * _atoi(argv[count]);
	count++;
}
printf("%d\n", result);
return (0);
}

}
