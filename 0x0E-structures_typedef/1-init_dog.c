#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
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
