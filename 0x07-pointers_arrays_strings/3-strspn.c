#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the string containing the set of
 * characters to be searched for.
 * Return: the length of the initial segment of the first string
 * that consists entirely of characters from the second string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, stspn = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				stspn++;
			j++;
		}
		i++;
	}
	return (stspn);
}
