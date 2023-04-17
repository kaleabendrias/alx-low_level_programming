#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - iniialize struct dog
 * @d: struct name
 * @name: name
 * @age: age
 * @owner: owner
 * Retuen: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d-.age = age;
	d->owner = owner;
}

