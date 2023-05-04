#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print.
 *
 * Return: (void);
 */
void print_binary(unsigned long int n)
{
	unsigned long int r;

	if(n == 0)
	{
		_putchar('0');
		return;
	}
	if(n > 1)
		print_binary(n >> 1);

	r = n & 1;
	putchar('0'+ r);
}
