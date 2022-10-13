#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the addition of the arguments
 * @a: first argument
 * @b: second argument
 * Return: returns an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction between two values
 * @a: first argument
 * @b: second argument
 * Return: returns an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication between two integers
 * @a: first argument
 * @b: second argument
 * Return: returns an integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division between two integers
 * @a: first argument
 * @b: second argument
 * Return: returns an integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulus between two numbers
 * @a: first argument
 * @b: second argument
 * Return: returns the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
