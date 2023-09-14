#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 * @...: variables
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list par;
unsigned int x;
unsigned sum = 0;
if (n == 0)
{
return 0;
}
va_start(par, n);
for (x = 0; x < n; x++)
sum += va_arg(par, int);
va_end(par);
return (sum);
}
