#include<stdio.h>
#include"main.h"

/**
 * _isupper - check upper case
 * description: checks the upper letters
 * @c: first parameter
 * Return: return 1 if upper otherwise 0
*/

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
