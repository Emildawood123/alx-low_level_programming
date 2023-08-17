#include "lists.h"
/**
 * insert_dnodeint_at_index - that insert to linked and return
 * @h: head of linked
 * @n: n required in new
 * @idx: index required
 * Return: new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp;
dlistint_t *new;
size_t len = 0;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
temp = *h;
while (temp)
{
temp = temp->next;
len++;
}
temp = *h;
if (idx > len - 1)
{
return (NULL);
}
if (temp == NULL && idx == 0)
{
*h = new;
new->next = NULL;
new->prev = NULL;
return (new);
}
while (i != idx - 1)
{
temp = temp->next;
i++;
}
new->next = temp->next;
temp->next = new;
new->prev = temp;
return (new);
}
