#include <stdio.h>
#include "dog.h"

/**
 * init_dog - define a new struct with the following elements:
 * @d: pointer to structure
 * @name: pointer to name of the dong
 * @age: age of the dog
 * @owner: pointer to the owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
