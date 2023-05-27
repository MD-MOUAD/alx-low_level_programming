#include "main.h"
/**
 * reverse_string - afunction that reverse string
 * @str: the string to reverse
 *
 * Return: reversed string
 */
char *reverse_string(char *str)
{
	char *start, *end, tmp;

	if (!str)
		return (0);
	start = end = str;
	while (*(end + 1))
		end++;
	for (; start < end; start++, end--)
		{
			tmp = *start;
			*start = *end;
			*end = tmp;
		}
	return (str);
}
/**
 * _strlen - a function that calculates the lenght of a string
 * @str: the string
 *
 * Return: the lenght
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
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
	int len1, len2, sum, maxlen, num1, num2, i = 0, remain = 0;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	maxlen = len1;
	if (len2 > maxlen)
		maxlen = len2;
	if (size_r <= maxlen)
		return (0);
	for (; len1 > 0 || len2 > 0; len1--, len2--)
	{
		if (len1 <= 0)
			num1 = 0;
		else
			num1 = n1[len1 - 1] - '0';
		if (len2 <= 0)
			num2 = 0;
		else
			num2 = n2[len2 - 1] - '0';
		sum = num1 + num2 + remain;
		if (sum > 9)
		{
			sum %= 10;
			remain = 1;
		}
		else
			remain = 0;
		r[i++] = sum + '0';
	}
	if (remain == 1)
	{
		if (size_r <= maxlen + 1)
			return (0);
		r[i++] = '1';
	}
	r[i] = '\0';
	return (reverse_string(r));
}
