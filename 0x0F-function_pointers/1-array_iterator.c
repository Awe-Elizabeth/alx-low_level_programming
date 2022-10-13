#include "function_pointers.h"

/**
 * array_iterator - prints an element of an array
 * @array: the array argument
 * @size: the array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}