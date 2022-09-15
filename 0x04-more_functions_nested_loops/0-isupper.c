#include "main.h"
/**
 * _issuper - Checks for uppercase characters
 * @c: parameter
 * Return: 1 or 0
 */
int _issuper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
