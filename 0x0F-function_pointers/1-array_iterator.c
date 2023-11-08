#include "function_pointers.h"

/**
 * array_iterator - this func prints the name of a string
 * @array: fuction to be performed
 * @size: size of array to be passed
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
		action(array[m]);
}
