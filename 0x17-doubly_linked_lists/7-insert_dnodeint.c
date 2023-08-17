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
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
temp = *h;
if (h == NULL)
	return (NULL);
if (new == NULL)
{
return (NULL);
}
new->n = n;
while (i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{
return (NULL);
}
if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}
else if (temp != NULL && temp->next == NULL)
{
new = add_dnodeint_end(h, n);
return (new);
}
else
{
new->next = temp->next;
temp->next = new;
new->prev = temp;
temp->next->prev = new;
}
return (new);
}
/**
 * dlistint_len - that fun return length
 * @h: head
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
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
temp = temp->next;
count++;
}
return (count);
}
