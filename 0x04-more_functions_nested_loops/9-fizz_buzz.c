#include <stdio.h>

/**
 * main- this code prints fizz buzz
 *
 * Return: 0 when it is a sucess
 */

int main(void)
{
	int m;

	for (m = 0; m < 100; m++)
	{
		if ((m % 3 == 0) && (m % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (m % 3 == 0)
			printf("%s", "Fizz");
		else if (m % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", m);
		if (m != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
