#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc,
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98.
 * @b: the size to reserve.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
