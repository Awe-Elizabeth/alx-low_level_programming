#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: returns zero
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
if (lastDigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
} else if (lastDigit == 0)
{
	printf("Last digit of %d is %d and is equal to 0\n", n, lastDigit);
} else if (lastDigit < 6 && lastDigit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
}
return (0);
}
