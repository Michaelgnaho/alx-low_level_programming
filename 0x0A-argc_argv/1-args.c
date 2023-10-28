#include <stdio.h>

/**
 * main - this is the main function
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0 when it is a success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
