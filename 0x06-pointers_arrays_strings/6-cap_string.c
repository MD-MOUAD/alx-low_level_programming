#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string
  * @str: a pointer to the string
  * Return: the string with all words capitalized
  */
char *cap_string(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p == '{' || *p == ' ' || *p == '\t' || *p == '\n'
			|| *p == ',' || *p == ';' || *p == '.'
			|| *p == '!' || *p == '?' || *p == '"'
			|| *p == '(' || *p == ')' || *p == '}')
			p++;
		else if (*p >= 65 && *p <= 90)
		{
			do {
				p++;
			}
				while (*p >= 97 && *p <= 122 || *p >= 65 && *p <= 90);
		}
		else if (*p >= 97 && *p <= 122)
		{
			*p -= 32;
			do {
				p++;
			}
				while (*p >= 97 && *p <= 122 || *p >= 65 && *p <= 90);
		}
		else
			p++;
	}
	return (str);
}
