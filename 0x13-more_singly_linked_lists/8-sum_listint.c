#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - that return sum of lis
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int n = 0;
if (head == NULL)
{
return (0);
}
while (head)
{
n = n + head->n;
head = head->next;
}
return (n);
}
