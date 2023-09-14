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
va_start(par, n)

for (x = 0; x < n; x++)
{
int v;
v = va_arg(par, int);
sum += v;
}
va_end(par);
return (sum);
}
