#include <stdio.h>
#include "dog.h"
/**
 * init_dog - that program initialize of type
 * @dog: struct
 * @name: its name
 * @age: its age
 * @owner: name of owner dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
