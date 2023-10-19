#include "main.h"
#include <stddef.h>
/**
 * string_toupper - Changes lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	if (str == NULL)
		return (NULL);

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
