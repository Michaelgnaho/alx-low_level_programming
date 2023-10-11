#include "main.h"
#include <stdio.h>

/**
 * times_table - this function prints times table
 *
 * Return: 0 when it is a success
 */

void times_table(void)
{
	int m;
	int g;
	int result;

	for (m = 0; m < 10; m++)
	{
		for (g = 0; g < 10; g++)
		{
			result = g * m;
			if (g == 0)
				printf("%d ", result);
			else
			{
				printf("%2d", result);
				if (g != 9)
					printf(", ");
			}

		}
		printf("\n");
	}

}
