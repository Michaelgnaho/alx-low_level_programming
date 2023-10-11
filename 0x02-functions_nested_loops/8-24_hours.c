#include "main.h"

/**
 * jack_bauer - this fuction prints minute
 *
 * Return: 0 when it is successful
 */

void jack_bauer(void)
{
	int m;
	int j;

	for (m = 0; m < 24; m++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
