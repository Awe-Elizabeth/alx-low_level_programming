#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - The function that prints all elements
 * @h: the head element
 * Return: returns type of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
