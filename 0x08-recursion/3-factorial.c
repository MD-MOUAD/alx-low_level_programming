#include "main.h"
/**
 * factorial - calculate the fuctorial of an integer
 * @n: the integer
 * Return: factorial of n or -1 if n is negative
 */
int factorial(int n)
{
	int f = 1;

	if (n < 0)
		return (-1);
	else if (n == 0);
		return (1);
	else
		return (f * factoriel(n - 1));
}
