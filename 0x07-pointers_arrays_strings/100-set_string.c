#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: a pointer to pointer to dest string
 * @to: pointer to sourc string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
