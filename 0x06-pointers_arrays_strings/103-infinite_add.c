#include "main.h"
/**
 * _strlen - a function that calculate the length of string
 * @: a pointer to the string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while(str[len])
	{
		len++;
	}
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
	int len1, len2, a, b, i;
	char *max, *min;
	char *buffer;
	
	max = n1;
	min = n2;
	if (_strlen(n2) > _strlen(n1))
	{
		max = n2;
		min = n1;
	}

	a = b = 0;
	for (i = 0; i < _strlen(min); i++)
	{
		a += *(max--) - '0';
		b += *(min--) - '0';
		if ((a + b) > 9)
		{
		}






		


