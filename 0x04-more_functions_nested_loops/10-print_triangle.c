#include "main.h"

/**
 * print_triangle- this number print triangle
 * @size: parameter
 *
 * Return: 0 when it is a sucess
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, g;

		for (m = 1; m <= size; m++)
		{
			for (g = m; g < size; g++)
			{
				_putchar(' ');
			}

			for (g = 1; g <= m; g++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

