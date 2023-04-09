#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: a pointer to the first number
 * @n2: a pointer to the seconde number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result
 * if the result can not be stored in r the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, sum, len, i;
	char *pn1, *pn2;

	/* convert n1 to int */
	pn1 = n1;
	num1 = 0;
	while (*pn1 != '\0')
	{
		num1 = (num1 * 10) + (*pn1 - '0');
		pn1++;
	}
	/* convert n2 to int */
	pn2 = n2;
	num2 = 0;
	while (*pn2 != '\0')
	{
		num2 = (num2 * 10) + (*pn2 - '0');
		pn2++;
	}
	sum = num1 + num2;
	/* calculate the lentgh of sum */
	len = 0;
	while (sum > 0)
	{
		len++;
		sum /= 10;
	}
	if (size_r <= len)
		return (0);
	/* convert sum to char */
	sum = num1 + num2;
	for (i = len - 1; i >= 0; i--)
	{
		r[i] = sum % 10;
		sum /= 10;
	}
	return (r);
}
