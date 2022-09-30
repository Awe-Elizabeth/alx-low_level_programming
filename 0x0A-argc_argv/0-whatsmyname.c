#include <stdio.h>
/**
 * main - Prints the commandline arguments
 * @argc: The number of commandline arg
 * @argv: Array of strings
 * Return: returns 0 as success
 */
void main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
