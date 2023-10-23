#include "main.h"

/**
 * _strchr- this func locate characters in a string
 * @s: the string to be checked
 * @c: the character to locate
 * Return: 0 when it is a success
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == c)
			return (s + m);
	}
	return ('\0');

}
