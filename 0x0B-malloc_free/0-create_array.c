#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initialises it with a specific char
 * @size: size of the array
 * @c: the character that initialises the array
 * Return: a pointer to the array, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);
	while (size--)
		a[size] = c;
	return (a);
}
