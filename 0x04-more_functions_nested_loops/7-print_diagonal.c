#include "main.h"

/**
 * print_diagonal - printing a line diagonal
 * @n: number of diagonal
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0 ; i < n; i++)
	{
		for (j = 0 ; j < n; j++)
		{
			if (j == i)
			{
				_putchar(92);
			else if (j < i)
				putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
