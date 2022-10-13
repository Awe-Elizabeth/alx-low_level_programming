#include "function_pointers.h"

/**
 * print_name - prints the name of a character
 * @name: character parameter
 * @f: a function pointer
 * Return: retuns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
