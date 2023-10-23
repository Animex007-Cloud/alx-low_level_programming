#include "lists.h"

/**
 * add_nodeint_end - entry point
 * Description: A function that adds a new node at the end
 *
 * @head: current placement of list
 * @n: list of data to be added
 * Return: the address of the new element or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addednode, *position;

	addednode = malloc(sizeof(listint_t));
	if (addednode == NULL)
		return (NULL);

	addednode->n = n;
	addednode->next = NULL;

	if (*head == NULL)
	{
		*head = addednode;
		return (*head);
	}
	position = *head;
	while (position->next != NULL)
		position = position->next;
	position->next = addednode;
	return (*head);
}
