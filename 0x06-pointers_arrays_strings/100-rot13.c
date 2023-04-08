#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: a pointer to the string
 * Return: the string coded in rot13
 */
char *rot13(char *s)
{
	char *p, lett[53], ro13[53];
	int i;

	p = s;
	lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	ro13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	while (*p)
	{
		for (i = 0; i < 26; i++)
		{
			if (*p == lett[i])
			{
				*p = ro13[i];
			}
		}
		p++;
	}
	return (s);
}
