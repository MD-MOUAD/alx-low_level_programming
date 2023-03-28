#include "main.h"
/**
  * rev_string - a function that reverses a string
  * @s: a pointer to the string
  * Return: (void)
  */
void rev_string(char *s)
{
	int i, len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	char arr[len];

	for (i = 0; i < len; i++)
	{
		arr[i] = *s;
		s--;
	}
	s = arr;
}
