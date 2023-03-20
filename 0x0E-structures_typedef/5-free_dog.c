#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated to dog
 * @d: Pointer to dog structure
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
