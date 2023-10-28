#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this is the main function
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0 when it is a success
 */

int main(int argc, char *argv[])
{
	int m, j;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);

	else
	{
		for (m = 1; m < argc; m++)
		{
			for (j = 0; argv[m][j] != '\0'; j++)
			{
				if (!(isdigit(argv[m][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[m]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
