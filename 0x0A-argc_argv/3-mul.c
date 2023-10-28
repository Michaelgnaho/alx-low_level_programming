#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0 when it is a success
 */

int main(int argc, char *argv[])
{
	int m1;
	int g2;
	int r3;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m1 = atoi(argv[1]);
		g2 = atoi(argv[2]);

		r3 = m1 * g2;
		printf("%d\n", r3);
	}
	return (0);
}
