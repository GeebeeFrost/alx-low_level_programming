#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	char *dog_name = name;
	char *dog_owner = owner;

	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);
	the_dog->name = dog_name;
	the_dog->age = age;
	the_dog->owner = dog_owner;
	return (the_dog);
}
