#include <unistd.h>

/**
 * putchar - function to builtin putchar
 * Return: On Success 1
 * On error, -1 returned
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
