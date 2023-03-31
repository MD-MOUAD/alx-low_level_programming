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
	char *pd = dest;
	char *ps = src;

	while (*ps != '\0' && n > 0)
	{
		*pd = *ps;
		*pd++;
		*ps++;
		n--;
	}
	while (n > 0)
	{
		*ps = '\0';
		*ps++;
		n--;
	}
}
