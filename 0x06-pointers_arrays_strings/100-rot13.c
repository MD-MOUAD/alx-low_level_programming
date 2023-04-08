#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: a pointer to the string
 * Return: the string coded in rot13
 */
char *rot13(char *s)
{
	char *p = s;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ro13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*p)
	{
		for (i = 0; i < 52; i++)
		{
			if (*p == lett[i])
			{
				*p = ro13[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
