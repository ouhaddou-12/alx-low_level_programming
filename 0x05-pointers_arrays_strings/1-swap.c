#include "main.h"

/**
 * swap_int - function that swap number
 * description: swap int
 * @a: first input
 * @b: second input
 * swap value a and b
 * Return: a and b
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
