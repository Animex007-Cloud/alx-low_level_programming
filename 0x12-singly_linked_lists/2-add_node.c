#include "lists.h"

/**
 * add_node - entry point
 * Description: code that adds a new node at the beginning of a list
 *
 * @head: pointer to pointer
 * @str: pointer to char
 * Return: address of new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *z;
	unsigned int y = 0;

	while (str[y])
		y++;

	z = malloc(sizeof(list_t));
	if (!z)
	{
		return (NULL);
	}

	z->str = strdup(str);
	z->y = y;
	z->next = (*head);
	(*head) = z;

	return (*head);

}
