#include "lists.h"

/**
 * listint_len - entry point
 * Description: A function that adds a new node at the beginning
 * of a listint
 *
 * @h: list
 * Return: num of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
