#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: c program running
 *
 * Return: Always return 0
*/

/* betty style doc for function main goes there */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
