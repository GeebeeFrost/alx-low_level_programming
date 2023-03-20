#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog_name - Prints name of dog or (nil)
 * @name: Name of dog
 */
void print_dog_name(char *name)
{
	if (!name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);
}

/**
 * print_dog_age - Prints age of dog
 * @age: Age of dog
 */
void print_dog_age(float age)
{
	printf("Age: %f\n", age);
}

/**
 * print_dog_owner - Prints owner of dog or (nil)
 * @owner: Owner of dog
 */
void print_dog_owner(char *owner)
{
	if (!owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to a dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		print_dog_name(d->name);
		print_dog_age(d->age);
		print_dog_owner(d->owner);
	}
}
