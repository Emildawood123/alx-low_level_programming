#include "main.h"
/**
 * swap_int - that swap two variables
 * @a: that first var
 * @b: that second var
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
