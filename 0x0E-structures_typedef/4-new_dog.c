#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);
	the_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (the_dog->name == NULL)
	{
		free(the_dog);
		return (NULL);
	}
	the_dog->owner = malloc((sizeof(char) * len2) + 1);
	if (the_dog->owner == NULL)
	{
		free(the_dog);
		free(the_dog->name);
		return (NULL);
	}
	strcpy(the_dog->name, name);
	strcpy(the_dog->owner, owner);
	the_dog->age = age;
	return (the_dog);
}
