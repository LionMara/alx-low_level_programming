#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog
 * @d: struct dog
 * @name: dogo name
 * @age: age of dogo
 * @owner: owner of dogo
 * Return: nothing to return, come tomorrow
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
