#include "main.h"

/**
 * swap_int- this func changes two integera with pointer
 * @a: first parameter
 * @b: second parameter
 *
 * Return: 0 when it is a success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;


}
