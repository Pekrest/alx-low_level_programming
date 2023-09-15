#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: The name of the Dog
 * @age: The age of the dog
 * @owner: The dog's owner
 *
 * Return: NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	char *a, *b;
	int x, y, z;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;

	a = malloc(sizeof(char) * x + 1);
	if (a == NULL)
	{
		free(dog);
		return (NULL);
	}
	b = malloc(sizeof(char) * y + 1);
	if (b == NULL)
	{
		free(a);
		free(dog);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		a[z] = name[z];
	for (z = 0; z <= y; z++)
		b[z] = owner[z];

	dog->name = a;
	dog->age = age;
	dog->owner = b;

	return (dog);
}
