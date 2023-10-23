#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: function parameter
  *
  * @a: function parameter
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int m;

	count1 = 0;
	count2 = 0;

	for (m = 0; m < size; m++)
	{
	count1 = count1 + a[m * size + m];
	}
	for (m = size - 1; m >= 0; m--)
	{
	count2 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", count1, count2);
}

