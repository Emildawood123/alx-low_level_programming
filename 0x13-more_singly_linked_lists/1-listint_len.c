#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - that func return len of list
 * @h: it,s head
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
int i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
