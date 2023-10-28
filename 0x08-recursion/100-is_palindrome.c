#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - this function checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - this func checks the characters recursively for palindrome
 * @s: string to check
 * @m: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if no
 */
int check_pal(char *s, int m, int len)
{
	if (*(s + m) != *(s + len - 1))
	return (0);
	if (m >= len)
	return (1);
	return (check_pal(s, m + 1, len - 1));
}