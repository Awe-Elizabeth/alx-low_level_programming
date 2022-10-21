#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "main.h"

/**
 * add_node_end - adds node at the end
 * @head: the ponter parameter
 * @str: the string parameter
 * Return: returns type of list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t newNode, temp;

	if (head != NULL && str != NULL)
	{
		newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
			return (NULL);
		newNode->str = strdup(str);
		newNode->len = _strlen(str);
		newNode->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;
			temp->next = newNode;
			return (temp);
		}

	}
}

/**
 * _strlen - counts the elements in a string
 * @str: the string
 * Return: returns the count
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str)
	{
		str++;
		i++;
	}
	return (i);
}
