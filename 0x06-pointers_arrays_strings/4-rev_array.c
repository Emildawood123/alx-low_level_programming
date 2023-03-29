#include "main.h"
/**
 * reverse_array - that reverse array
 * @a: that is array
 * @n: that is length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int t;

	for (j = 0; j < n--; j++)
	{
	t = a[j];
	a[j] = a[n];
	a[n] = t;
	}
}
