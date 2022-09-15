#include <stdio.h>
#include <math.h>
/**
 * main - Finds the prime numbers
 * Return: returns an integer
 */
int main(void)
{
	long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
			prime = 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
