#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: the integer.
 * Return:  the natural square root of n
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int sqrt;

		sqrt = _sqrt_recursion(n - 1);
		if (sqrt < 0)
			return (-1);
		else if (sqrt * sqrt == n)
			return (sqrt);
		else
			return (sqrt + 1);
	}
}
