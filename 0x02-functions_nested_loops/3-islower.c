#include "main.h"

/**
 *_islower - this function checks for upper and lower case alphabet
 *@c: this is the parameter that is checked
 *  Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
