#include "main.h"
/**
 * print_most_numbers - prints most numbers
 * Return: returns void
 */
void print_most_numbers(void)
{
	int i;

	for (let i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}
