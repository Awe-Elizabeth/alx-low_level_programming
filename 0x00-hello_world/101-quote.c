#include <unistd.h>
/**
 * main - Main entry that prints the worid
 * Return: returns zero
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
