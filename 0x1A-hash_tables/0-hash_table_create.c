#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_create - create hash table
 * @size: size
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *new = malloc(sizeof(hash_table_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->size = size;
new->array = malloc(size * sizeof(hash_node_t));
if (new->array == NULL)
{
free(new->array);
return (NULL);
}
while(i < size)
{
new->array[i] = NULL;
i++;
}
return new;
}