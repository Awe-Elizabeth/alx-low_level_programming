#include <main.h>
/**
 * _islower - prints lower alphabets
 * @c: a letter
 * Return: zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
