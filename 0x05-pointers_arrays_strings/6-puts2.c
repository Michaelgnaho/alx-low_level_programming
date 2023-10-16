#include "main.h"

/**
 * puts2- this func print a string in even number form
 * @str: string to print from
 *
 * Return: 0 when it is a success
 */

void puts2(char *str)
{
	int m;

	for (m = 0; str[m] !=  '\0'; m++)
	{
		if (m % 2 == 0)
			_putchar(str[m]);
	}
	_putchar('\n');

}
