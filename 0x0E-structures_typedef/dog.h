#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a basic information about a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner
 *
 * Description: A structure representing basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
