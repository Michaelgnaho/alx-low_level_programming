#include "main.h"

/**
 * _memcpy- this function copies from src to dest
 * @dest: the destination to copy to
 * @src: where to copy from
 * @n: number of times
 * Return: 0 when it is a success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];
	return (dest);


}
