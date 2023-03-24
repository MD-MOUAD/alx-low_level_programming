#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 9
 * Return: void
 */

void more_numbers(void)
{
	int i, n, last_digit;

	for (i = 0 ; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			last_digit = n % 10;
			_putchar('0' + last_digit);
		}
		 _putchar('\n');
	}
}
