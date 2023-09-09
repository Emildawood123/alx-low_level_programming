#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete: free all
 * @ht: hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *temp;
hash_node_t *curr;
if (ht == NULL || ht->size == 0)
{
return;
}
while (i < ht->size)
{
curr = ht->array[i];
if (curr == NULL)
{
i++;
continue;
}
while (curr)
{
temp = curr;
curr = curr->next;
free(temp->key);
free(temp->value);
free(temp);
}
i++;
}
free(ht->array);
free(ht);
}
