#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - that program to identfy struct
 * @name: its name
 * @age: its age
 * @owner: its owner name
 * Return:pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i;
int lenn = 0;
int leno = 0;
dog_t *dog;

if (name == NULL || owner == NULL)
{
return (NULL);
}
dog = malloc(sizeof(dog_t));
while (name[lenn])
	lenn++;
dog->name = malloc(lenn + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < lenn; i++)
	dog->name[i] = name[i];
dog->age = age;
while (owner[leno])
	leno++;
dog->owner = malloc(leno + 1);
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
for (i = 0; i < lenn; i++)
	dog->owner[i] = owner[i];
return (dog);
}
