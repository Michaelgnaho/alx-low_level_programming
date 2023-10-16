#include "main.h"

/**
 * _puts- this function print a string followed a new line
 * @str: the string to be printed
 *
 * Return: 0 when it is a sucess
 */

void _puts(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}
