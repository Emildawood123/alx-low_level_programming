#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - that program print all lower and upper alphabet
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
	putchar(n);
	}
	return (0);
}
