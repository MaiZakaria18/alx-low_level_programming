#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print_numbers
 * @separator: string
 * @n : int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list par;
va_start(par, n);

for (x = 0; x < n; x++)
{
printf("%d", va_arg(par, int));
if (separator != NULL && x < n - 1)
printf("%s", separator);
}
va_end(par);
printf("\n");
}
