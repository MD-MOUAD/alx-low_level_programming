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
	char *ph, *qn;
	while (*haystack)
	{
		ph = haystack;
		qn = needle;
		while (*haystack && *pn && *haystack == *pn)
		{
			haystack++;
			pn++;
		}
		if (*pn == '\0')
			return (ph);
		haystack = ph + 1;
	}
	return (0);
}
