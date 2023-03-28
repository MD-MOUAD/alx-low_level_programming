#include "main.h"
/**
  * _strlen - a function that returns the length of a string
  * @s: a pointer to a string
  * Return: the lenght of the string
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		len++;
		s++;
	}
	return (len);
}
