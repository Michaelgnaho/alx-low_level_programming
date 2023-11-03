#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array containing a range of integers
 * @min: the starting value of the range
 * @max: the ending value of the range
 * Return: pointer to the allocated memory containing the range of integers
 */

int *array_range(int min, int max)
{
	int size;
	int *result;
	int i;

	if (min > max)
	return (NULL);

	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = min++;

	return (result);
}

