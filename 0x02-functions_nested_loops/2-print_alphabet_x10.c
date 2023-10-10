#include "main.h"

/**
 * print_alphabet_x10 - this function prints complete alphabet 10 times
 *
 * Return: 0 when it is a success;
 */

void print_alphabet_x10(void)
{
	int m;
	char j;

	for (m = 0; m < 10; m++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		 _putchar('\n');

	}

}

