#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print.
 *
 * Return: (void);
 */
void print_binary(unsigned long int n);
{
	unsigned long r;

	if(n == 0)
	{
		_putchar('0');
		return;
	}
	r = n % 2;
	print_binary(n / 2);
	_putchar('0' + r);
}
