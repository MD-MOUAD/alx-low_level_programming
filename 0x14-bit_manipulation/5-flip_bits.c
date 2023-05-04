#include "main.h"
/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: Number
 * @m: Number
 *
 * Return: Numbers of bits that n have to change for be equal to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip = 0;
	unsigned long int xor;

	xor = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (((xor >> i) & 1) == 1)
			flip++;
	}
	return (flip);
}
