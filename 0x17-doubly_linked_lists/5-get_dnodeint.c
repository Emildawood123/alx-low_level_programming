#include "lists.h"
/**
 * get_dnodeint_at_index - that return temp ,return index of linked
 * @head: head of linked
 * @index: index required
 * Return: temp
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int count = 0;
temp = head;
while (temp)
{
temp = temp->next;
count++;
}
if (index > count - 1)
{
return (NULL);
}
temp = head;
count = 0;
while (count != index)
{
temp = temp->next;
count++;
}
return (temp);
}
