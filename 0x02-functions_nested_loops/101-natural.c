#include <stdio.h>

/**
 * main - this fuction prints the multiples of 3 and 5
 *
 * Return: 0 if it is a success
 */

int main(void)
{
	int m;
	int sum = 0;

	for (m = 0; m < 1042; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
			sum = sum + m;
	}
	printf("%d\n", sum);
	return (0);
}
