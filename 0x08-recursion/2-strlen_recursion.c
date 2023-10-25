#include "main.h"

/**
 * _strlen_recursion- this func return the length of a string
 * @s:te para meter
 *
 * Return: 0 when it is a success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);


}
