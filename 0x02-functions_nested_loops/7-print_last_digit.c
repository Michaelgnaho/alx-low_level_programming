#include "main.h"

/**
 * print_last_digit - this funtion prints the las digit
 *
 * @m: this is the parameter
 *
 * Return: g when i is a success
 */

int print_last_digit(int m)
{
	int g;

	g = m % 10;

	if (m  < 0)
		g = -g;
	_putchar(g + '0');
	return (g);
}
