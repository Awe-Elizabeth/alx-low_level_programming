#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an element of an array
 * @array: the array argument
 * @size: the array size
 * @action: function pointer
 * return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
