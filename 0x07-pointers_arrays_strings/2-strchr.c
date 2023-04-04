#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: a pointer to the string.
 * @c: the character to be located.
 * Return: a pointer to the first occurence of the character in the string.
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s+i) != '\0')
	{
		if (*(s+i) == c)
			return (s+i);
		i++;
	}
	return (NULL);
}
