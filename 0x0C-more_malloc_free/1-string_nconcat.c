#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat- this fuction concatenate memory using malloc
 * @s1: the first parameter
 * @s2: the second parameter
 * @n: number to be copied from s2
 * Return: 0 if it is a success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		s1len++;
	for (m = 0; s2[m] != '\0'; m++)
		s2len++;

	result = malloc(sizeof(char) * (s1len + n) + 1);

		if (result == NULL)
			return (NULL);
		if (n >= s2len)
		{
			for (m = 0; s1[m] != '\0'; m++)
				result[m] = s1[m];
			for (m = 0; s2[m] != '\0'; m++)
				result[s1len + m] = s2[m];
			result[s1len + m] = '\0';
		}
		else
		{
			for (m = 0; s1[m] != '\0'; m++)
				result[m] = s1[m];
			for (m = 0;  m < n; m++)
				result[s1len + m] = s2[m];

			result[s1len + m] = '\0';
		}
		return (result);

}
