#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - estrucura para descrpcion de perro
 * @name: nombre
 * @age: edad
 * @owner: dueño
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
