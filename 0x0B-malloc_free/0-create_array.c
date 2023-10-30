#include "main.h"

/**
 * create_array - this function create an array of character
 * @size: this is the size of the character
 * @c: character to be created
 * Return: pointer when it is a success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		arr[m] = c;

	return (arr);
}
