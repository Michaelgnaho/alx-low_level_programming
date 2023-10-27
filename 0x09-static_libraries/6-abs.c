#include "main.h"

/**
 * _abs - this fuction prints an absolute number
 *
 * @m:  this is the function parameter
 * Return: -m or m
 */

int _abs(int m)
{
	if (m < 0)
		return (-m);
	else if (m >= 0)
	{
		return (m);
	}
	return (0);
}
