#include "lists.h"

/**
 * free_listint2 - entry point
 * Description: A function that frees a listint_t
 *
 * @head: NULL value
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tp, *print;

	if (head == NULL)
		return;

	print = *head;
	while (print != NULL)
	{
		tp = print;
		print = print->next;
		free(tp);
	}
	*head = NULL;
}
