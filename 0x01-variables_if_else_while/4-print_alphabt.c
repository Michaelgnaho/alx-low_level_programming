#include <stdio.h>

/**
 * main - this code prints alphabet excluding e and g
 *
 * Return: 0;
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		if (m != 'e' && m != 'q')
			putchar(m);
	putchar('\n');

	return (0);
}
