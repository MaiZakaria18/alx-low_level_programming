#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * f_char - print char
 * @par: string
 * @separator: pointer
 */
void f_char(char *separator, va_list par)
{
printf("%s%c", separator, va_arg(par, int));
}

/**
 * f_int - print char
 * @par: string
 * @separator: pointer
 */
void f_int(char *separator, va_list par)
{
printf("%s%d", separator, va_arg(par, int));
}

/**
 * f_float - print char
 * @par: string
 * @separator: pointer
 */
void f_float(char *separator, va_list par)
{
printf("%s%f", separator, va_arg(par, double));
}

/**
 * f_string - print
 * @par: string
 * @separator: pointer
 */
void f_string(char *separator, va_list par)
{
char *string = va_arg(par, char *);
switch ((int)(!string))
case (1):
string = "(nil)";
printf("%s%s", separator, string);
}

/**
 * print_all - print_all
 * @format: string
 */
void print_all(const char * const format, ...)
{
int x, y;
char *separator;
va_list par;
all_p form[] = {
{"c", f_char},
{"i", f_int},
{"f", f_float},
{"s", f_string},
{NULL, NULL}
};
va_start(par, format);
x = 0;
while (format && format[x])
{
y = 0;
while (form[y].f)
{
if (format[x] == form[y].f[0])
{
form[y].func(separator, par);
separator = ", ";
}
y++;
}
x++;
}
printf("\n");
va_end(par);
}
