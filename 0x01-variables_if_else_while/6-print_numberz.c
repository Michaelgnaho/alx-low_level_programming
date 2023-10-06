#include <stdio.h>

/**
 * main - this fuction prints single digit num from in base ten
 *
 * Return: 0 when it is a sucess
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		putchar(m + '0');
	putchar('\n');

	return (0);
}
