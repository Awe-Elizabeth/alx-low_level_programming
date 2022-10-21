#include <stdio.h>
#include <stdlib.h>

#include "lists.h"
/**
 * print_list - prints the number of element in linked list
 * @h: The first element on the list
 * Return: returns n
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else

		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
