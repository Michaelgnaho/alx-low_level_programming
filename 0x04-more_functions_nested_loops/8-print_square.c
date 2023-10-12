#include "main.h"

/**
 * print_square- this number print square
 *
 * @size: parameter
 * Return: 0 when it is a sucess
 */

void print_square(int size)
{
	if (size == 0)
		_putchar('\n');
	else
	{
		int m;
		int g;

		for (m = 0; m < size; m++)
		{
			for (g = 0; g < size; g++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
