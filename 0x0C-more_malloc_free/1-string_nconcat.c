#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;

	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		z = malloc(sizeof(char) * (l1 + n + 1));
	else
		z = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!z)
		return (NULL);

	while (a < l1)
	{
		z[a] = s1[a];
		a++;
	}

	while (n < l2 && a < (l1 + n))
		z[a++] = s2[b++];

	while (n >= l2 && a < (l1 + l2))
		z[a++] = s2[b++];

	z[a] = '\0';
	return (z);
}
