#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, mul;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (--i, mul = 0 ; i >= 0; i--, mul++)
	{
		if (b[i] == '1')
			dec += 1 << mul;
	}

	return (dec);
}
