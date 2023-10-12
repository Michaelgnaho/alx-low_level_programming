#include "main.h"

/**
 * print_number - this code prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int m1;

	if (n < 0)
	{
		m1 = -n;
		_putchar('-');
	} else
	{
		m1 = n;
	}

	if (m1 / 10)
	{
		print_number(m1 / 10);
	}

	_putchar((m1 % 10) + '0');
}
