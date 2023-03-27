#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
		a++;

	for (b = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
