#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint- that function return new node
 * @head: head
 * Return: new
 */
void free_listint(listint_t *head)
{
listint_t *h;
while (head != NULL)
{
h = head->next;
free(head);
head = h;
}
}
