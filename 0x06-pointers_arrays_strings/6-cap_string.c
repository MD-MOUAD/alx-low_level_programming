#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string
  * @str: a pointer to the string
  * Return: the string with all words capitalized
  */
char *cap_string(char *str)
{
	char *p = str;
	char sepa[] = " \t\n\t\n,;.!?\")(\{\}";
	int i;

	if (*p >= 'a' && *p <= 'z')
	{
		*p -= 32;
	}
	p++;
	while (*p)
	{
		for (i = 0; sepa[i]; i++)
		{
			if ((*p >= 'a' && *p <= 'z') && *(p - 1) == sepa[i])
			{
				*p -= 32;
			}
		}
		p++;
	}
	return (str);
}
