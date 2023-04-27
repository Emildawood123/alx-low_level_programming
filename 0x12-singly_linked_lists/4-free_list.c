#include <stdlib.h>
#include "lists.h"
/**
 * free_list - that function make list is freed
 * @head: this head
 */
void free_list(list_t *head)
{
while (head)
{
free(head->str);
free(head);
head = head->next;
}
}
