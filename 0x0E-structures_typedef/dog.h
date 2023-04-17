#ifndef DOG_H
#define DOG_H
/**
 * struct dog - that is struct to any dog
 * @name: that is name
 * @age: its age
 * @owner: who is owner it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
