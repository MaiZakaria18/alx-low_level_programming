#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - print_string
 * @separator: string
 * @n : int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *s;
va_list par;
va_start(par, n);
for (x = 0; x < n; x++)
{
s = va_arg(par, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (separator != NULL && x < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(par);
}
