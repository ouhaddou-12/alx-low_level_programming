#include "main.h"
#include <stdio.h>

/**
 * main - entery point
 * factors - print factor of number
 * description: program prints largest prime factor of the number
 * return: (0);
*/

int main(void)
{
long int i, n = 612852475143;

for (i = 0; i <= n; i++)
{
	if (n % i == 0)
	{
		printf("%lu", i);
		printf("\n");
	}
}
}
