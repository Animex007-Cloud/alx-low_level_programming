#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * Description: function that creates a new dog
 * @name: pointer to character
 * @age: age holder
 * @owner: pointer to string
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int newd1 = 0;
	int newd2 = 0;
	int newd3 = 0;
	dog_t *newdog;

	newdog = (dog_t *)malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	while (name[newd1++])
		;
	while (owner[newd2++])
		;
	newdog->name = malloc(newd1 * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (newd3 = 0; newd3 <= newd1; newd3++)
		newdog->name[newd3] = name[newd3];
	newdog->age = age;
	newdog->owner = malloc(newd2 * sizeof(newdog->owner));
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
	for (newd3 = 0; newd3 <= newd2; newd3++)
		newdog->owner[newd3] = owner[newd3];
	return (newdog);
}
