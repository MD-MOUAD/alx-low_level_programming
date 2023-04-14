#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space, in the range
 * from the start of ptr up to the minimum of the old and new sizes.
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *prealloc;
	unsigned int i;


	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		prealloc = malloc(new_size);
		if (!prealloc)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		prealloc = malloc(new_size);
		if (prealloc == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			prealloc[i] = ptr[i];
		free(ptr);
		return (prealloc);
	}
	if (new_size < old_size)
	{
		prealloc = malloc(new_size);
		if (prealloc == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
			prealloc[i] = ptr[i];
		free(ptr);
		return (prealloc);
	}
}
