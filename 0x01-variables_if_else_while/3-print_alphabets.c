#include <stdio.h>

/**
 * main - this main fuction print in lower case and upper case
 *
 * Return: 0 when it is a success
 */

int main(void)
{
	char m;
	char n;

	for (m = 'a'; m < 'z'; m++)
		putchar(m);
	for (n = 'A'; n < 'Z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
