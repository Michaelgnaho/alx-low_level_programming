#include "main.h"

/**
 * _strchr- this func locate characters in a string
 * @s: the string to be checked
 * @c: the character to locate
 * Return: c when it is a success.
 * if c is not found return NULL.
 */

char *_strchr(char *s, char c)
{

	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
