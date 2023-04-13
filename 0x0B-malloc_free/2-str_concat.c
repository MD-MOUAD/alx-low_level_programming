#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer that point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (*s2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}




