#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * @min: the min value of the array
 * @max: the max value of the array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i - min] = i;
	return (arr);
}
