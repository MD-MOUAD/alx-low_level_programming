#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: the number to print
 * Return: print the number
 */
void print_number(int n)
{
	int digit, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	/* find the largest divisor of n*/
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	/* print every digit of n */
	while (divisor > 0)
	{
		digit = ((n / divisor) % 10);
		_putchar('0' + digit);
		divisor /= 10;
	}
}
