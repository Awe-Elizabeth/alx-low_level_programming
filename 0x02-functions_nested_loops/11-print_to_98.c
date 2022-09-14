#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints rational numbers to 28
 * @n: parameter
 *Return: Return
 */
int print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++
		}
	}
	else
	{
		printf("98");
	}
	print("\n");
}
