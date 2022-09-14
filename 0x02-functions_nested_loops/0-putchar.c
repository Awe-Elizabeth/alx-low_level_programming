#include "main.h"
/**
 * main - Prints _putchar
 * Return: returns zero
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		*sh++;
	}
	_putchar('\n');
	return (0);
}
