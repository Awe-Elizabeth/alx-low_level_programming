#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints rational numbers to 28
 * @n: parameter
 *Return: Return
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
<<<<<<< HEAD
			if (n !98)
=======
			if (n != 98)
>>>>>>> ddfd1bbfa7d4d68f0532c11b7123e6b9b163fa34
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
<<<<<<< HEAD
			printf(", ");
			}
			n--

=======
				printf(", ");
			}
			n--;
>>>>>>> ddfd1bbfa7d4d68f0532c11b7123e6b9b163fa34
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
