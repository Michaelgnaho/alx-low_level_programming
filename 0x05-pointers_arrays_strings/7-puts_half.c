#include "main.h"

/**
 * puts_half- this func print a string by half
 * @str: this is the string to be divided
 *
 * Return: 0 when it is a success
 */

void puts_half(char *str)
{
	int m;
	int count = 0;
	int n;

	for (m = 0; str[m] != '\0'; m++)
		count++;
	n = (count - 1) / 2;

	for (m = n + 1; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');


}
