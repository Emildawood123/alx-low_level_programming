#include "lists.h"
/**
 * add_dnodeint - add in first
 * @head: head of linked
 * @n: n required in new
 * Return: new linked
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->prev = NULL;
new->next = (*head);
(*head) = new;
new->n = n;
return (new);
}
