#include "lists.h"

/**
 * delete_nodeint_at_index - entry point
 * Description: A function that deletes the node at
 * the index 0 from linked list
 *
 * @head: start of node.
 * @index: element to replace the deleted one.
 * Return: 1 on success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b;
	listint_t *prints, *brand;

	if (!head || !*head)
		return (-1);
	prints = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(prints);
		return (1);
	}
	for (b = 0; b < (index - 1); b++)
	{
		prints = prints->next;
		if (prints == NULL)
			return (-1);
	}
	brand = prints->next;
	prints->next = brand->next;
	free(brand);
	return (1);
}
