#ifndef _DOG_H_
#define _DOH_H_

/**
 * struct dog - cualidades para el perro
 * @name: nombre
 * @age: edad
 * @owner: dueño
 *
 * Description: attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
