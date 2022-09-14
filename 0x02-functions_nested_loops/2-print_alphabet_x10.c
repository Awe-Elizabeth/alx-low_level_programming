#include "main.h"
/**
 * prints_alphabet_x10 - prints 
 * Return: retturn x10
 */
void print-alphabet_x10(void)
{
	int n, co;

	co = 0;
	while (co < 10)
	{
		for (n = 'a'; n++)
		{
			_putchar(n);
		}
		co++
		_putchar('\n');
	}
}
