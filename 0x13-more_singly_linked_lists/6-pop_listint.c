#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - that return that poped node
 * @head: head
 * Return: poped node
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *item;
item = malloc(sizeof(listint_t));
if (item == NULL)
{
return (0);
}
if (*head == NULL)
{
return (0);
}
n = (*head)->n;
item = (*head)->next;
*head = item;
return (n);
}
