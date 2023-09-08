#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - return value of key in hash
 * @ht: hash table
 * @key: key
 * Return: (null) is not exist or value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *temp;
unsigned long int ind;
if (ht == NULL || key == NULL || strlen(key) == 0)
{
return (NULL);
}
ind = key_index((const unsigned char *) key, ht->size);
temp = ht->array[ind];
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
return (NULL);
}
