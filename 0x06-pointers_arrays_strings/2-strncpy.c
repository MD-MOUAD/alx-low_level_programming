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
	char *pd = dest, *ps = src;
	int i, src_len = 0;

	while (*ps != '\0')
	{
		src_len++;
		ps++;
	}
	while (src_len < n)
	{
		*ps = '\0';
		ps++;
		src_len++;
	}
	for (i = 0; i < n; i++)
	{
		*p = *src;
		*p++;
		*src++;
	}
	return (dest);
}
