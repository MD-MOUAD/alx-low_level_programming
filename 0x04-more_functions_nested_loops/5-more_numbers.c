#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 9
 * Return: void
 */

void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '9' ; c++)
		_putchar(c);
	for (c = '0'; c <= '5' ; c++)
	{
		if (c == '5')
			c = '\n';
		else
			_putchar('1');
		_putchar(c);
	}
}
