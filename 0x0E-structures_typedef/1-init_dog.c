#include "dog.h"

/**
 * init_dog - Entry point
 * Description: function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to char
 * @age: age holder
 * @owner: pointer to char
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
