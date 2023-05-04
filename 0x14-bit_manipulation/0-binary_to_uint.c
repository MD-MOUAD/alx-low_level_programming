#include "main.h"
/**
 * power_re - calculate x to the power of n.
 * @x: base.
 * @n: exponent.
 * Return: x to the power of n.
 */
unsigned int power_re(unsigned int x, unsigned int n)
{
	if (n == 0)
		return (1);
	return (x * power_re(x, n - 1));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int exponent, dec = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (--i, exponent = 0 ; i >= 0; i--, exponent++)
		dec = dec + (b[i] - '0') * power_re(2, exponent);

	return (dec);
}
