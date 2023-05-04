#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 *
 * @n: the number to test.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux;
	unsigned int i, len = 0;

	if (n == 0)
		return (-1);

	aux = n;
	while (aux)
	{
		aux = aux >> 1;
		len++;
	}
	if (index >= len)
		return (-1);

	return ((n >> index) & 1);
}
