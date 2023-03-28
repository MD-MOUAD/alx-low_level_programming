#include "main.h"
/**
  * print_rev - a function that prints a string in reverse
  * followed by new line
  * @s: a pointer to a string
  * Return: (void)
  */

void print_rev(char *s)
{
	int len, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = 0; i < len; i++)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
