#include "main.h"
/**
 *  print_last_digit - last digit
 *
 *@a: The int to print
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int ld;

	if (n < 0)
	{
	ld = (-1 * (n % 10));
	_putchar (ld + '0');
	return (ld);
	}
	else
	{
	ld = (n % 10);
	_putchar (ld + '0');
	return (ld);
	}
}
