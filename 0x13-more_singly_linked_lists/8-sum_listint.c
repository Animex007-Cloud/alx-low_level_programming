#include "lists.h"

/**
 * sum_listint - entry point
 * Description: A function that sums all elements of a linked list
 *
 * @head: begining of list
 * Return: the summed element
 */

int sum_listint(listint_t *head)
{
	int summed;

	for (summed = 0; head; summed += head->n, head = head->next)
		;
	return (summed);
}
