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

if (*head == NULL || head == NULL)
{
return (0);
}
n = (*head)->n;
item = (*head)->next;
free(*head);
*head = item;
return (n);
}
