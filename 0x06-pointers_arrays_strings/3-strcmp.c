#include "main.h"

/**
 * _strcmp- this func print a string in reverze
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 when it is a success
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] != '\0' || s2[m] != '\0'; m++)
	{
		if (s1[m] != s2[m])
		{
			if (s1[m] > s2[m])
				return (s1[m] - s2[m]);
			else if (s1[m] < s2[m])
				return (s1[m] - s2[m]);
		}
	}
	return (0);

}
