#include <unistd.h>
/**
 * _putchar - writes the char
 * @c: this is char
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

