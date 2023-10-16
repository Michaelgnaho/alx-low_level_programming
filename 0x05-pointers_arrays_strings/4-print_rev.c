#include "main.h"

/**
 * print_rev- this func print a string in reverze
 * @s: the string to be reversed
 *
 * Return: 0 when it is a sucess
 */

void print_rev(char *s)
{
	int m = 0;
	int g;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	s--;
	for (g = m; g > 0; g--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
