#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the result of multiplying two numbers
 * followed by a new line
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main fcn
 * Return: 0 (Success), 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int i;

		result = a * b;
		printf("%d\n", i);
	}
	return (0);
}
