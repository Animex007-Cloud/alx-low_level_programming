#include "lists.h"

/**
 * list_len - entry point
 * Description: code that returns the number of elements in alinked list
 *
 * @h: pointer
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
