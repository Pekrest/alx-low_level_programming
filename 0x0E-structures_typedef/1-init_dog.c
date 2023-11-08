#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  a function that initializes a variable of type struct dog
 * @d: pointer to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
