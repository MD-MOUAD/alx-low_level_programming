#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes to concatenate
 * Return: a pointer to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated
 * or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, a;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	nconcat = malloc(sizeof(char) * i + n + 1);
	if (nconcat == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		nconcat[j] = s1[j];
	}
	for (j = i, a = 0; j < (i + n) || s2[a] == '\0'; j++, a++)
	{
		nconcat[j] = s2[a];
	}
	nconcat[j] = '\0';
	return (nconcat);
}
