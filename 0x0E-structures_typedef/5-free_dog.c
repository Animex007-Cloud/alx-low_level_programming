#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - entry point
 * Description: function that free dogs
 * @d: pointer
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
