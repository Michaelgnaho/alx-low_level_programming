#include "main.h"

/**
 * _isdigit- this function checks for digit
 *
 * @c: this serves as the parameter
 *
 * Return: 0 when it is a success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return(0);
}
