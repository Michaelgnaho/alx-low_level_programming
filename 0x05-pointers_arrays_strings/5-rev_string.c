#include "main.h"

/**
 * rev_string- this func print a string in reverze
 * @s: string to reverse
 *
 * Return: 0 when it is a success
 */

void rev_string(char *s)
{
	int m;
	int count = 0;

	for (m = 0; s[m] != '\0'; m++)
		count++;

	for (m = 0; m < count / 2; m++)
	{
		char j;

		j = s[m];
		s[m] = s[count - 1 - m];
		s[count - 1 - m] = j;
	}
}
