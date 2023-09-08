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
unsigned long int ind = key_index((const unsigned char *) key, ht->size);
if (ht->array[ind] == NULL)
{
return ("(null)");
}
return (ht->array[ind]->value);
}
