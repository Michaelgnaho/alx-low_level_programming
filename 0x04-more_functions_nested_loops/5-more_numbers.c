#include "main.h"

/**
 *  more_numbers- this function print 0 to 14 without 10times
 *
 * Return: 0 when it is a sucess
 */

void  more_numbers(void)
{
	int m;
	int g;

	for (m = 0; m < 10; m++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g > 9)
			_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
		}
		_putchar('\n');
	}

}
