#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - order numbers
 * description: print numbers ascd
*/
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
