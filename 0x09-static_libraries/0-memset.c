#include "main.h"

/**
 * _memset- this func fills memory bytes
 * @s: memory area to be filled
 * @b: memory to copy from
 * @n: number of bytes
 *
 * Return: 0 when it is a success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0 ; m < n; m++)
		s[m] = b;
	return (s);


}
