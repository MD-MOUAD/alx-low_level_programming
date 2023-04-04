#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to search.
 * @needle: the substring to find.
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, needlen = 0;

	while (*needle)
	{
		needlen++;
		needle++;
	}
	needle -= needlen;
	while (*haystack)
	{
		for (i = 0; i < needlen; i++)
		{
			if (*haystack == needle[i])
				return (haystack)
		}
		haystack++;
	}
	return (0);
}
