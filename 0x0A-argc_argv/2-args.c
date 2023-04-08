#include <stdio.h>
#include <stdlib.h>
/**
 * main - that program print word and \n
 * @argc: that is int
 * @argv: taht is char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 1;

	while (count != argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	return (0);
}
