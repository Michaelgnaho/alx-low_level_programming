#include "main.h"

/**
 * _isalpha - this function check if it is upper or lower case
 *
 * @c: this is the parameter
 *
 * Return: 0 or 1;
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

