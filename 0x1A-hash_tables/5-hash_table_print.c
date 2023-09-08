#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - not return print only
 * @ht: hash table
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *new;
unsigned long int z = 0;
printf("{");
while (z < ht->size)
{
if (ht->array[z])
{
new = ht->array[z];
while (new)
{
if (new->next)
{
printf("'%s' : '%s', ", new->key, new->value);
}
else
{
printf("'%s' : '%s'", new->key, new->value);
}
new = new->next;
}
}
z++;
}
printf("}\n");
}
