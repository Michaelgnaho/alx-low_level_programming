#include "main.h"

/**
 * print_alphabet - this fuction prints alphabts from a to z
 *
 * Return: 0 when its a success
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	_putchar('\n');

}
