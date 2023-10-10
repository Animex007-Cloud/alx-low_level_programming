#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Entry point
 *
 * Description: initialize a variable of type struct dog.
 *
 * @d: the pointer
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to dog's owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
