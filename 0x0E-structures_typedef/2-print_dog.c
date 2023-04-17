#include <stdio.h>
#include "dog.h"
/**
 * print_dog - taht program prints elements
 * @d: that is based on struct
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
}
else
{
printf("Name: %s\n", (d->name ? d->name : "(nil)"));
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
