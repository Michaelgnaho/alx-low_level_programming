#include "search_algos.h"

/**
 * binary_search - This searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: This is a pointer to the first element of the array to search.
 * @size: This is the  number of elements in the array.
 * @value: This is the value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* This Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* This Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* This Calculates the middle index */
		i = left + (right - left) / 2;

		/* If the middle element is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);

		/* If the middle element is greater than the value */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
