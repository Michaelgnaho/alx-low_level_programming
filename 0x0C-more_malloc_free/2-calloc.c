#include "main.h"

/**
 * _calloc- this fuction allocate memory using malloc
 * @nmemb: the parameter
 * @size: size of member
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);

	if (result == NULL)
		return (NULL);

	else
		return (result);

}
