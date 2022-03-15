#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - llamar estrucura
 * @name: nombre
 * @age: edad
 * @owner: dueño
 * @d: point
 * Return: struct
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

