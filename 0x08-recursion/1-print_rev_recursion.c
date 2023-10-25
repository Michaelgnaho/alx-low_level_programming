#include "main.h"

/**
 * _print_rev_recursion- this func print a string in reverze
 * @s: the parameter
 *
 * Return: 0 when it is a success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
