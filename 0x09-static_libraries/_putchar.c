#include "main.h"
#include <unistd.h>
/**
 * _putchar - that return input char
 * @c: that is input
 * Return: char
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
