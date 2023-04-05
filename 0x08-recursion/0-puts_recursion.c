#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line
 * @s: a pointer to the string
 * Return: (void)
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
}
