#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: c program running
 *
 * Return: Always return 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n = 97;
	int a = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
