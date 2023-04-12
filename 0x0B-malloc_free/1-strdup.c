#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to anewly allocated
 * space in memory which contains a copy of the
 * string given as a parameter
 * @str: string to be newly allocated in memory
 * Return: NULL if string is empty or insufficient memory
 * a pointer to the duplicated string (Success)
 */

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *b;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	
	b = malloc(size * sizeof(*str) + 1);

	if (b == 0)
		return (NULL);
	else
	{
		for (; a < size; a++)
			b[a] = str[a];
	}
	return (b);
}
