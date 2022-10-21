#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lists.h"

/**
 * add_node - Pointer that adds a new node
 * @head: The root pointer
 * @str: the string character
 * Return: returns a type of list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head != NULL && str != NULL)
	{
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @str: string to count
 * Return: String length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
