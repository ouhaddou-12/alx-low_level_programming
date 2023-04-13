#include <stdlib.h>
#include "main.h"
/**
 * _calloc - implements calloc with malloc
 * Allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: the size of the array to be created
 * Return: NULL if nmemb/size is 0,
 * if malloc fails, return NULL,
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *z;

	char *e;

	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(nmemb * size);

	if (z == NULL)
		return (NULL);

	e = z;

	for (a = 0; a < (nmemb * size); a++)
		e[a] = '\0';

	return (z);
}
