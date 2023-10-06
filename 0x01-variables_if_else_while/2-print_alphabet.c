#include <stdio.h>

/**
 * main - this fuction uses putchar only in for loop
 *
 * Return: 0 when is a success
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	putchar ('\n');

	return (0);
}
