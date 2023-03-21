#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
*/

void print_alphabet(void)
{
int i;
for (i = 0; i < 10; i++)
{
int a;
for (a = 97; a < 123; a++)
{
_putchar(a);
}
_putchar(i);
}
_putchar('\n');
}
