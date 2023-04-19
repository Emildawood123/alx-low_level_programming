#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - taht return depend on ops[]
 * @s: that is a op
 * Return: depond on
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
for (i = 0; i < 5; i++)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
}
return (0);
}
