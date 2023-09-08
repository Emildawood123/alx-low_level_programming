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
hash_node_t *head;
unsigned long int ind = key_index((unsigned char *) key, ht->size);
new = malloc(sizeof(hash_node_t));
if (ht == NULL || key == NULL || strlen(key) == 0)
{
return (0);
}
if (new == NULL)
{
free(new);
return (0);
}
head = ht->array[ind];
new = head;
while (new)
{
if (strcmp(new->key, key) == 0)
{
free(new->value);
new->value = strdup(value);
return (1);
}
new = new->next;
}
new = malloc(sizeof(hash_node_t));
new->value = strdup(value);
new->key = strdup(key);
new->next = head;
head = new;
return (1);
}
