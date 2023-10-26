#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * Description: A function that inserts the node
 * index at 0 of linked list
 *
 * @head: start of the list
 * @idx: the index of the node
 * @n: elements to insert in node.
 *
 * Return: address of new node or Null if fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *print, *addednode;

	print = *head;
	addednode = malloc(sizeof(listint_t));

	if (addednode == NULL)
		return (NULL);
	addednode->n = n;
	if (idx == 0)
	{
		addednode->next = print;
		*head = addednode;
		return (*head);
	}

	while (idx > 1)
	{
		print = print->next;
		idx--;
		if (!print)
		{
			free(addednode);
			return (NULL);
		}
	}
	addednode->next = print->next;
	print->next = addednode;
	return (addednode);
}
