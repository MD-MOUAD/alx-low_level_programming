 #include "main.h"

int ten_pow(int x);

/**
 * print_number - a function that prints an integer
 * @n: the number to print
 * Return: print the number
 */
void print_number(int n)
{
	int i, ld, len = 0, a = n;

	if (a == 0)
	{
		_putchar('0');
		return;
	}
	if (a < 0)
	{
		_putchar('-');
		a = a * (-1);
	}
	/* calculate the length of n */
	while (a != 0)
	{
		len++;
		a /= 10;
	}
	for (i = len ; i > 0; i--)
	{
		a = n / ten_pow(i - 1);
		ld = a % 10;
		_putchar('0' + ld);
	}
}
/**
 * ten_pow - a function that calculate 10 to the power x
 * @x: the power of 10
 * Return: 10 to the power x
 */
int ten_pow(int x)
{
	int i, p = 1;

	for (i = 1; i <= x; i++)
	{
		p = p * 10;
	}
	return (p);
}
