#include<stdio.h>
/**
 * main-main finds the size of types
 * Return: 0
 */
int main(void)
{	int i;
	char c;
	long int n;
	long long int m;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of an int: %li byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(n));
	printf("Size of a long long int: %li byte(s)\n", sizeof(m));
	printf("Size of a float: %li byte(s)\n", sizeof(f));
	return (0);
}
