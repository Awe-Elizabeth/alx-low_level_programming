#include <stdio.h>
/**
 * main - Entry
 * Return: returns zero
 */
int main(void)
{
	char c;
for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'q' || c != 'e')
	{
		putchar(c);
	}
}
	putchar('\n');
	return (0);
}
