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
        int n;
        int a;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        a = n % 10;
        if (a > 5)
        {
                printf("The last number of %d is %d and is greater than 5", n, a);
	}
	else if (a == 0)
	{
		printf("The last number of %d is %d and is 0", n, a);
	}
	else 
	{
		printf("The last number of %d is %d and is less than 6 and not 0", n, a);
	}

        return (0);
}
