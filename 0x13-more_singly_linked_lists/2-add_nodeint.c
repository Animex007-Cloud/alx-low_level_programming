#include "lists.h"

/**
 * add_nodeint - entry point
 * Description: A function that adds a new node a the beginning of a
 * listint_t
 *
 * @head: linked list pointer to another pointer
 * @n: constant int
 * Return: the address of the new element of NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addednode;

	addednode = *head;
	addednode = malloc(sizeof(listint_t));
	if (addednode == NULL)
		return (NULL);

	addednode->n = n;
	addednode->next = *head;
	*head = addednode;
	return (*head);
}
