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
		return (a % 10);
	}
	else
	{
		return (-1 * (a % 10));
	}
}
