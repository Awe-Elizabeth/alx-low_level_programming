#include<stdio.h>
/**
 * main-main finds the size of types
 * Return: 0
 */
int main(void)
{	printf("Size of a char: %s, byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %s, byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %s, byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %s, byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %s, byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
