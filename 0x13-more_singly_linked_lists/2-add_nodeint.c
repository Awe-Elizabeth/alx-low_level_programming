#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function that returns the address of a new node
 * @head: the first node
 * @n: the integer element of the node
 * Return: returns type of listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
	return (new);
}
