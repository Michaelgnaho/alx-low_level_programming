#include "main.h"

/**
 * _atoi- this func convert string to integers
 * @s: this is the string
 *
 * Return: 0 when it is a success
 */

int _atoi(char *s)
{
	int i, m, n, lent, f, digit;

	i = 0;
	m = 0;
	n = 0;
	lent = 0;
	f = 0;
	digit = 0;

	while (s[lent] != '\0')
		lent++;

	while (i < lent && f == 0)
	{
		if (s[i] == '-')
			++m;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);

}
