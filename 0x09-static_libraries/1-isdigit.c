#include "main.h"
#include <stdio.h>

/**
 *  _isdigit - function that checks for a digit
 *
 * @c: input for digit
 *Description - function that checks for a digit
 *
 * Return: 1 if c is uppercase Returns 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
