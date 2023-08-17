#include "lists.h"
/**
 * free_dlistint - free all node in linked
 * @head: head of linked
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *forFree;
forFree = head;
while (forFree)
{
free(forFree);
forFree = forFree->next;
}
}
