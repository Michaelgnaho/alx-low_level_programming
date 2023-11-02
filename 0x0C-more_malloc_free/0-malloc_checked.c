#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- this fuction allocate memory using malloc
 * @b: the parameter
 * Return: 0 if it is a success
 */
void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
