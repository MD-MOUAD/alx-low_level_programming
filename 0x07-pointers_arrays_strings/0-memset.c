#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte
* @s: a pointer to the memory area
* @b: the constant byte
* @n: number of bytes
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
