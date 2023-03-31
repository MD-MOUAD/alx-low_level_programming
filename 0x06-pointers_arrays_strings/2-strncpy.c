#include "main.h"

/**
  * _strncpy - a fonction similar to strncpy
  * @dest: a pointer to dest string
  * @src: apointer to src string
  * @n: number of bytes to be used
  * Return: a pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		*p = *src;
		*p++;
		*src++;
	}
	return (dest);
}
