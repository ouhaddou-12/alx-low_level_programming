#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: c program running
 *
 * Return: Always return 0
*/

/* betty style doc for function main goes there */

int main(void)
{
int digit_1 = 0, digit_2;

while (digit_1 < 10)
{
digit_2 = 0;
while (digit_2 < 10)
{
if (digit_1 != digit_2 && digit_1 < digit_2)
{
putchar(digit_1 + 48);
putchar(digit_2 + 48);
if (digit_1 + digit_2 != 17)
{
putchar(',');
putchar(' ');
}
}
digit_2++;
}
digit_1++;
}
putchar('\n');
return (0);
}
