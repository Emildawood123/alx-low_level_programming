#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - that fun return numbers of list
 * @h: head of linkedList
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
int i = 0;
while (h)
{
printf("%i\n", h->n);
i++;
h = h->next;
}
return (i);
}
