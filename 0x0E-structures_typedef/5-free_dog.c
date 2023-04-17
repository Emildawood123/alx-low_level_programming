#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - taht program make all free
 * @d: that is string
 * Return:void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
