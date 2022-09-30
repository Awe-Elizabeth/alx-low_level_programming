#include <stdio.h>
/**
 * main - Prints the number of arguments
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Returns 0 when successful
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
