#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n - 1; j++)
		_putchar(' ');
		for (i = 0; i < n; i++)
		_putchar('\\');
	}
	_putchar('\n');
}
