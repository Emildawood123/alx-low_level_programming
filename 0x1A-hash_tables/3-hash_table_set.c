#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - that fun return 1 succ and 0 faild
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
unsigned long int ind = key_index((unsigned char *) key, ht->size);
new = malloc(sizeof(hash_node_t));
if (ht == NULL || key == NULL || strlen(key) == 0)
{
return (0);
}
new = add_node(&(ht->array[ind]), value, key);
if (new == NULL)
{
return (0);
}
return (1);
}
/**
 * add_node - that return new hash table aft
 * @head: head
 * @key: key
 * @value: value
 * Return: new
*/
hash_node_t *add_node(hash_node_t **head, const char *value, const char *key)
{
hash_node_t *new;
new = *head;
while (new)
{
if (strcmp(key, new->key) == 0)
{
free(new->value);
new->value = strdup(value);
return (*head);
}
new = new->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
return (NULL);
}
new->key = strdup(key);
new->value = strdup(value);
new->next = *head;
*head = new;
return (*head);
}
