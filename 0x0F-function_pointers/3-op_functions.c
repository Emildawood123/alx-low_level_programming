#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - that add two number
 * @a: first
 * @b: second
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - that add two number
 * @a: first
 * @b: second
 * Return: sum
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - that add two number
 * @a: first
 * @b: second
 * Return: sum
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - that add two number
 * @a: first
 * @b: second
 * Return: sum
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - that add two number
 * @a: first
 * @b: second
 * Return: sum
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
