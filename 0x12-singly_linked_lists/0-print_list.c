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

	if (h->str == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		i = i + 1;
		h->next;
	}
	return (i);
}
