#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed to the program
 * followed by a new line
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main fcn
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);

	return (0);
}
