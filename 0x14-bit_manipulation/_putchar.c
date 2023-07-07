#include <unistd.h>
/**
 *_putchar - that function return one char
 *@c: that is a character
 *Return: char
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
