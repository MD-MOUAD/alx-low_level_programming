#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer to to memory area dest
 * @src: a pointer to to memory area src
 * @n:number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ps = src, *pd = dest;

	while (*ps != '\0' && n > 0)
	{
		*pd = *ps;
		pd++;
		ps++;
		n--;
	}
	while (n > 0)
	{
		*pd = '\0';
		pd++;
		n--;
	}
	return (dest);
}
