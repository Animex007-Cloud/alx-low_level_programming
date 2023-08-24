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
	size_t zs = 0;

	while (h)
	{
		zs++;
		h = h->next;
	}
	return (zs);
}
