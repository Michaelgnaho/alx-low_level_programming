#include "main.h"

/**
 * print_rev- this func print a string in reverze
 * @s: the string to be reversed
 *
 * Return: 0 when it is a sucess
 */

void print_rev(char *s)
{
	int m;
	int count = 0;

	for (m = 0; s[m] != '\0'; m++)
		count++;
	for (m = count - 1; s[m] >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');


}
