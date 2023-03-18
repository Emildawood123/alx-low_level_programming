#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - this program print all lowercase alphabet
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar (alph[n]);
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
