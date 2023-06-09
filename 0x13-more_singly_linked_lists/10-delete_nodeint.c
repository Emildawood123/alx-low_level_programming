#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - that return 1 or -1
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *test = (*head);
listint_t *item = (*head);

while (test)
{
i++;
test = test->next;
}
if (i < index)
{
return (-1);
}
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
return (1);
}
for (i = 0; i < index - 1; i++)
{
item = item->next;
}
item->next = item->next->next;
return (1);
}
