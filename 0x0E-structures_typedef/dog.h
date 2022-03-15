#ifndef _DOG_H_
#define _DOG_H_

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

/**
 * change name of the struc whith typedef
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
