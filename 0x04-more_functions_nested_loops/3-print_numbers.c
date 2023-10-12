#include "main.h"

/**
 * print_numbers - this function prints from 0 to 9
 *
 * Return: 0 when it is a success
 */

void print_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
		_putchar(m + '0');
	_putchar('\n');
}
