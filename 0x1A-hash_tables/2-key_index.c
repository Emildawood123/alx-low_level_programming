#include "hash_tables.h"
/**
 * key_index - this return index of key
 * @key: key
 * @size: size
 * Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int Index = hash_djb2(key) % size;
return (Index);
}
