#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: the first element
 * Return: returns a size_t type
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
