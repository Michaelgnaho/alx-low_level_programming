#include <stdio.h>

/**
 * main - this code prints hexadecimal numbers
 *
 * Return: 0 when it is a success
 */

int main(void)
{
	int m;
	char n;

	for (m = 0; m < 10; m++)
		putchar(m + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar ('\n');

	return (0);
}
