#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{

va_list par;
unsigned int x, sum = 0;
va_start(par, n);
if (!n)
{
return (0);
}
for (x = 0; x < n; x++)
sum += va_arg(par, int);
va_end(par);
return (sum);
}
