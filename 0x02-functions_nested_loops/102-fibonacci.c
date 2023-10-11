#include <stdio.h>

/**
 * main - this code print fibo nacci of numbers
 *
 * Return: 0 when sucessful
 */

int main(void)
{
	unsigned long int numb1 = 1;
	unsigned long int numb2 = 2;
	unsigned long int next;
	int m;

	printf("%lu, ", numb1);

	for (m = 1; m < 50; m++)
	{
		printf("%lu", numb2);
		next = numb1 + numb2;
		numb1 = numb2;
		numb2 = next;

		if (m != 49)
			printf(", ");
	}
	printf("\n");
	return (0);

}
