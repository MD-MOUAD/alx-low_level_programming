#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: a pointer to first integer
 * @b: a pointer to second integer
 * Return: (void)
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
