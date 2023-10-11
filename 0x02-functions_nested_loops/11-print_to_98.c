#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this fuction print natural numbers
 *
 * @n: parameter for the function
 *
 * Return: 0 if success
 */

void print_to_98(int n)
{
	int g;

	if (n >= 0 && n < 98)
	{
		for (g = n; g <= 98; g++)
		{
			printf("%d", g);
			if (g != 98)
				printf(", ");
		}
		printf("\n");
	}

	else if (n < 0)
	{
		for (g = n; g <= 98; g++)
		{
			printf("%d", g);
			if (g != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 0)
	{
		for (g = n; g >= 98; g--)
		{
			printf("%d", g);
			if (g != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}

}

