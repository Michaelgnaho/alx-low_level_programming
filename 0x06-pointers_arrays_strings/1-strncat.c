#include "main.h"
#include <string.h>

/**
 * _strncat- this func print a string in reverze
 * @dest: first string
 * @src: second string
 * @n: the number
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lent = strlen(dest);
	int m;

	for (m = 0; m < n && *src != '\0'; m++)
	{
		dest[lent + m] = *src;
		src++;
	}
	dest[lent + m] = '\0';
	return (dest);


}
