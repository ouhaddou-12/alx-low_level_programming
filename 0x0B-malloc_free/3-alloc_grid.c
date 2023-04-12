#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of  matrix
 * @height: height of  matrix
 * Return: pointer to  created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **z;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	z = (int **) malloc(sizeof(int *) * height);

	if (z == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		z[a] = (int *) malloc(sizeof(int) * width);
		if (z[a] == NULL)
		{
			free(z);
			for (b = 0; b <= a; b++)
				free(z[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			z[a][b] = 0;
		}
	}
	return (z);
}
