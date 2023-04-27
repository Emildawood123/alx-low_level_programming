#include <stdio.h>
#include "lists.h"
/**
 * list_len - that return len of linkedlist
 * @h: this is head
 * Return: length
 */
size_t list_len(const list_t *h)
{
int i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
