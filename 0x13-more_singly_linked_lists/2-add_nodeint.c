#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - that return linked list afeter ad
 * @n: number
 * @head: head
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
