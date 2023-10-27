#include "main.h"

/**
 * _strlen- this func prints the length of a string
 *
 * @s: the string to  be counted
 *
 * Return: the length of s
 */

int _strlen(char *s)
{

	int m;
	int count = 0;

	for (m = 0; s[m] !=  '\0'; m++)
		count++;
	return (count);

}
