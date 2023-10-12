#include "main.h"

/**
 * print_diagonal- this number print 0 to 9 without 2 and 4
 *
 * @n: the parameter
 * Return: 0 when it is a sucess
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int m;
		int g;

		for (m = 0; m < n; m++)
		{
			for (g = 0; g < m; g++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}


}
