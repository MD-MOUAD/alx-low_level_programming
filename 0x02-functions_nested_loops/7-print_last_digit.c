#include "main.h"
/**
 *  print_last_digit - last digit
 *
 *@a: The int to print
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	if (a > 0)
	{
		_putchar('0' + (a % 10));
		return (a % 10);
	}
	else
	{
		_putchar('0' + (-1 * (a % 10));
		return (-1 * (a % 10));
}
