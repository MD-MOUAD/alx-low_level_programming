#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s: a pointer to the string
 * Return: the string coded in leet
 */
char *leet(char *s)
{
	char *p = s;
	char let[] = "AEOTL";
	char dig[] = "43071";
	int i;

	while (*p)
	{
		for (i = 0; i < 5; i++)
		{
			if (*p == let[i] || *p == let[i] + 32)
			{
				*p = dig[i];
			}
		}
		p++;
	}
	return (s);
}
