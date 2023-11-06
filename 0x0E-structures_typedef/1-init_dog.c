#include "dog.h"
#include <stddef.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/** Check if d is not NULL to avoid potential issues */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
