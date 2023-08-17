#include "lists.h"
/**
 * add_dnodeint_end - that fun return new ,add end linked
 * @head: head of linked
 * @n: n required in new
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tail;
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->prev = NULL;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
tail = (*head);
while (tail->next != NULL)
{
tail = tail->next;
}
tail->next = new;
new->n = n;
new->prev = tail;
new->next = NULL;
return (new);
}
