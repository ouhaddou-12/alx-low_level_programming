#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * _puts_recursion - function that print string
 * @s: string to be printed
 * return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
