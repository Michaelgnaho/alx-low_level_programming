#include "main.h"

/**
 * str_concat - this function creates an array of character
 * @s1: first string
 * @s2: second string
 * Return: pointer when it is a success
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int m;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		s1len++;
	for (m = 0; s2[m] != '\0'; m++)
		s2len++;
	cat = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (cat == NULL)
		return (NULL);

	for (m = 0; s1[m] != '\0'; m++)
		cat[m] = s1[m];
	for (m = 0; s2[m] != '\0'; m++)
		cat[s1len + m] = s2[m];
	return (cat);
}

