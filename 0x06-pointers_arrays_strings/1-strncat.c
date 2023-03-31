#include "main.h"

/**
  * _strncat - a function that concatenates two strings
  * @src: a pointer to source string
  * @dest: a pointer to dest string
  * @n: number of bytes to take from src
  * Return: n bytes from the src string appending to the dest string
  */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i, counter = 1;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
