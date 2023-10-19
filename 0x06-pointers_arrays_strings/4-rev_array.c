#include "main.h"

/**
 * reverse_array- this func print a string in reverze
 * @a: first integer
 * @n: second integer
 *
 * Return: 0 when it is a success
 */

void reverse_array(int *a, int n)
{
	int m, temp;

	for (m = 0; m < n / 2; m++)
	{
		temp = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = temp;
	}



}
