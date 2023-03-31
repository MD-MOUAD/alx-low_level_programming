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

	while (*src != '\0' && n > 0)
	{
		*pd = *src;
		*pd++;
		*src++;
		n--;
	}
	while (n > 0)
	{
		*pd = '\0';
		*pd++;
		n--;
	}
	return (dest);
}
