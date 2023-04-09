#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the command line arguments it receives
 * followed by a new line
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main fcn
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
