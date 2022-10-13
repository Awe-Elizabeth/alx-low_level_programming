#include <stdio.h>
#include "functions_pointers.h"
/**
 * int_index - searches for a specific integer
 * @array: array argument
 * @size: number of elements in the array
 * @cmp: function pointer argument
 * Return: returns an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
