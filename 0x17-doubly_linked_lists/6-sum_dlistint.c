#include "lists.h"
/**
 * sum_dlistint - that return result of values of link..
 * @head: head to browse
 * Return: result of vaul...
 */
int sum_dlistint(dlistint_t *head)
{
int res = 0;
dlistint_t *temp;
temp = head;
if (head == NULL)
{
return (0);
}
while (temp)
{
res = res + temp->n;
temp = temp->next;
}
return (res);
}
