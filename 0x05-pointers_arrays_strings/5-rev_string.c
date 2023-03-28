#include "main.h"
/**
  * rev_string - a function that reverses a string
  * @s: a pointer to the string
  * Return: (void)
  */

void rev_string(char *s)
{
	int i, len = 0;
	char *p;

	*p = *s;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	p--;
	for (i = 0; i < len; i++)
	{
		s[i] = *p;
		p--;
	}
}
