#include "lists.h"
/**
 * dlistint_len - that fun return length
 * @h: head
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *temp;
if (h == NULL)
{
return (0);
}
temp = h;
while (temp)
{
temp = temp->next;
count++;
}
return (count);
}
