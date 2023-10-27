#include "main.h"

/**
 * _strstr- this func locate a substring
 * @haystack:where to find
 * @needle: what to find
 *
 * Return: 0 when it is a success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *h = haystack;
	char *P = needle;

	while (*h == *P && *P != '\0')
	{
	h++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);

}
