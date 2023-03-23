#include <unistd.h>
/**
 * _putchar - write a char
 * @c: this is a char
 * Return: 1 if true
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
