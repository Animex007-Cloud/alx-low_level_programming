#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry point
 *
 * Description: create a new dog
 * @name: pointer for name of dog
 * @age: age of dog
 * @owner: pointer to dog's owner
 *
 * Return: pointer to a new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nLen, ownLen, z;
	dog_t *dnew;

	dnew = (dog_t *)malloc(sizeof(dog_t));
	if (dnew == NULL)
		return (NULL);
	nLen = ownLen = 0;
	while (name[nLen++])
		;
	while (owner[ownLen++])
		;
	dnew->name = malloc(nLen * sizeof(dnew->name));
	if (dnew->name == NULL)
	{
		free(dnew);
		return (NULL);
	}
	for (z = 0; z <= nLen; z++)
		dnew->name[z] = name[z];
	dnew->age = age;
	dnew->owner = malloc(ownLen * sizeof(dnew->owner));
	if (dnew->owner == NULL)
	{
		free(dnew->name);
		free(dnew);
		return (NULL);
	}
	for (z = 0; z <= ownLen; z++)
		dnew->owner[z] = owner[z];
	return (dnew);
}
