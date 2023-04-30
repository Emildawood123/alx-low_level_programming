#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *item;
listint_t *new;
while (*head)
{
item = (*head)->next;
(*head)->next = new;
new = *head;
*head = item;
}
*head = new;
return (new);
}
