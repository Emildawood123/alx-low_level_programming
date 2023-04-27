#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - that function make list is freed
 * @head: this head
 * Return: void
 */
void free_list(list_t *head)
{
free(head);
}
