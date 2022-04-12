#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		d->name = "(nil)";
		d->age = "(nil)";
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
