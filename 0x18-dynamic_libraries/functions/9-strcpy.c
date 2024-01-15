#include "main.h"

/**
 * _strcpy- this func print a string in reverze
 * @src: the is th first parameter
 * @dest: second parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
		dest[m] = src[m];
	dest[m] = '\0';
	return (dest);


}
