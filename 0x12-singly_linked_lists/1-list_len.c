#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * list_len - Prints the number of elements in a linked list
 * @h: first element
 * Return: return a size_t data
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	whlie(h != NULL)
	{
		h = h->next;
		i++
	}
	return (i);
}
