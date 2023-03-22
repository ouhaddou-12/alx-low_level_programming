#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * times_table - printing table with number
 */

void times_table(void)
{
int i, j, mult, n, pre;
if (n < 15 || n > 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = j * i;
if (mult <= n)
{
printf("%d", mult);
if (j != n)
{
pre = i * (j + 1);
if (pre <= n)
{
printf(",  ");
}
else
{
printf(", ");
}
}
}
else
{
printf("%d", mult);
if (j != n)
{
printf(", ");
}
}
}
printf("\n");
}
}
}
