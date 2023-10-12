#include "main.h"

/**
 * print_line- this number print 0 to 9 without 2 and 4
 *
 * @n: parameter
 * Return: 0 when it is a sucess
 */

void print_line(int n)
{
	if (n == 0)
		_putchar('\n');
	else
	{
		int g;

		for (g = 0; g < n; g++)
			_putchar('_');
		_putchar('\n');
	}
}

