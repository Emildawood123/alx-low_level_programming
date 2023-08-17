#include "lists.h"
/**
 * delete_dnodeint_at_index - that del node in linked
 * @head: head of linkedlist
 * @index: index required
 * Return: 1 success or -1 faild
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int count = 0;
temp = *head;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
if (*head)
{
(*head)->prev = NULL;
}
return (1);
}
while (count <= index)
{
temp = temp->next;
count++;
}
if (temp == NULL)
{
return (-1);
}
if (temp->next == NULL)
{
temp->prev->next = NULL;
return (1);
}
else
{
temp->next->prev = temp->prev;
temp->prev->next = temp->next;
return (1);
}
}
