#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - taht fun return len and print
 * @h: head of linked
 * Return: length of linked
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *temp;
if (h == NULL)
{
return (0);
}
temp = h;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
return (count);
}
