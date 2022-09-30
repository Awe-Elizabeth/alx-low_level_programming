#include <stdio.h>
/**
 * main - Multiplies two numbers
 * @argc: The number of argument
 * @argv: The array of arguments
 * Return: returns 0 when successful and 1 if there's error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (argv[1] * argv[2]);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
