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
unsigned int count;
count = 0;
temp = *head;
if (*head == NULL)
{
return (-1);
}
while (temp)
{
temp = temp->next;
count++;
}
if (index > count - 1)
{
return (-1);
}
temp = *head;
count = 0;
while (count != index)
{
temp = temp->next;
count++;
}
if (temp == *head)
{
temp = temp->next;
*head = temp;
return (1);
}
temp->prev->next = temp->next;
return (1);
}
