#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: the array to exectute his elements
 * @size: the size of the arrau
 * @action: a pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
