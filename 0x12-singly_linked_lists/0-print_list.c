#include <stdio.h>
#include "lists.h"
/**
 * print_list - that return numbers of nodes
 * @h: that is head
 * return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
int n;

for (n = 0; h != NULL; n++)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%i] %s\n", h->len, h->str);
}
h = h->next;
}
return (n);
}
