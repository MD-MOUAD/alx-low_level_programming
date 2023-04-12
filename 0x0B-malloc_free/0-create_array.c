#include "main.h"
#include <stdlib.h>
/**
 * creat_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: char to assign
 * @size: size of array
 * Description: creat array of size
 * Return:  a pointer to the array, or NULL if it fails
 * or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *arr = malloc(sizeof(char) * size);
	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
