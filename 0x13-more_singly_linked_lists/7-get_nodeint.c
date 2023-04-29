#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *item;
item = head;
while (n < index)
{
item = item->next;
n++;
}
return (item);
}
