#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int strlen = 0;
	int i;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	s--;
	for (i = strlen; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
