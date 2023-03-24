#include "main.h"
/**
 * print_triangle - that print hashes as a triangle
 * @size: times of hashes --
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size - i - 1; j++)
	{
	_putchar(' ');
	}
	for (k = 0; k <= i; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
