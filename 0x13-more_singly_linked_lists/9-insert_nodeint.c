#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - that insert item in list
 * @head: head
 * @idx: index is wanted to insert init
 * @n: item->n
 * Return: head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *item = *head;
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (i < idx - 1)
{
if (item == NULL)
{
return (NULL);
}
item = item->next;
i++;
}
new->next = item->next;
item->next = new;
return (new);
}
