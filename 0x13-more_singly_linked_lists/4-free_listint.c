#include "lists.h"

/**
 * free_listint - entry point
 * Description: A function that frees list
 *
 * @head: holds elements
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head == '\0')
		return;
	free_listint(head->next);
	free(head);
}
