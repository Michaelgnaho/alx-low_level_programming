#include <stdio.h>

/**
 * main - thid code prints alphabet in descending order
 *
 * Return: 0 when it is a success
 */

int main(void)
{
	int m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');

	return (0);
}
