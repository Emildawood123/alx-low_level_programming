#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - that function return new node
 * @head: head
 * @n: int of new node
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h = *head;
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
while (h->next != NULL)
{
h = h->next;
}
h->next = new;
return (new);
}
