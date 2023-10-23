#include "main.h"

/**
  * print_chessboard - the main function
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int m;
	int r;

	for (m = 0; m < 8; m++)
	{
	for (r = 0; r < 8; r++)
	_putchar(a[m][r]);
	_putchar('\n');
	}
}

