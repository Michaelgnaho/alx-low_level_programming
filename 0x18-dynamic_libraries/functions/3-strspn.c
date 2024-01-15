#include "main.h"

/**
 * _strspn- this func get the prifix in a string
 * @s: first string
 * @accept: what to be checked
 *
 * Return: 0 when it is a success
 */

unsigned int _strspn(char *s, char *accept)
{
	int m;
	int g;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (g = 0; s[m] != accept[g]; g++)
		{
			if (accept[g] == '\0')
				return (m);
		}

	}
	return (0);

}
