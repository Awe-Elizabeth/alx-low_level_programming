#include "main.h"
/**
 * print_line - Prints the underscore
 * @n: the parameter
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
	}

}
