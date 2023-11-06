#include "dog.h"
#include <stdio.h>
/**
 * init_dog - name of struct
 * @d: name of function
 * @name: name of d
 * @age: age of d
 * @owner: name of owner
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
