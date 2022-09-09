#include<stdio.h>
/**
 * main-main finds the size of types
 * Return: 0
 */
int main(void)
{	int i;
	char c;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %2ld, byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %2ld, byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %2ld, byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %2ld, byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %2ld, byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
