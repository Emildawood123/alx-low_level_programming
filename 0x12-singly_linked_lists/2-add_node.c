#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - that function
 * @head: that is a linkedlist
 * @str: this is a string
 * Return: address a new
 */
list_t *add_node(list_t **head, const char *str)
{
int i = 0;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
new->str = strdup(str);
new->len = i;
new->next = (*head);
(*head) = new;
return (*head);
}
