#include "main.h"

/**
 * print_array- this func print an array;
 * @n: first parameter
 * @a: second parameter
 *
 * Return: 0 when it is a success
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m < (n - 1))
		printf(", ");

	}
	printf("\n");


}
