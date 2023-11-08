#include "function_pointers.h"

/**
 * int_index- this func comparares an int
 * @array: array to be compared
 * @size: size of an array
 * @cmp: pointer function
 * Return: return -1 if it is a success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
	return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) == 1)
			return (m);
	}
	return (-1);

}
