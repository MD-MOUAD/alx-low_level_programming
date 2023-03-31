#include "main.h"

/**
  * _strcat - a function that concatenates two strings
  * @src: a pointer to source string
  * @dest: a pointer to dest string
  * Reurn: the src string appending to the dest string
  */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
