#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check a number is digit
 * description: chech the digit number
 * @c first number
 * retunr: Returns 1 if is a digit otherwise 0
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
