#include "main.h"

/**
 * _strdup - this function returns a pointer to a new allocated space
 * @str: this is the size of the character
 * Return: pointer when it is a success
 */

char *_strdup(char *str)
{
	int m;
	char *copy;
	int count = 0;

	if (str == NULL)
	return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		copy[m] = str[m];

	return (copy);
}
