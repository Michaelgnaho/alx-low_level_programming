#include <stdio.h>

/**
 * main - this function prints combo numbers
 *
 * Return: 0 when it is a success
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
		if (m != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
