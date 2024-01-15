#include "main.h"
#include <stddef.h>

/**
 * _strpbrk- this func search a string for a set for a set of byte
 * @s: where to check
 * @accept: what to check
 * Return: 0 when it is a success
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *m = accept;

		while (*m != '\0')
		{
			if (*s == *m)
				return (s);
			m++;
		}
		s++;
	}
	return (NULL);


}
