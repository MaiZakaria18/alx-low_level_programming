#include "main.h"
/**
 * _puts - function that prints a string
 * Description - function that prints a string
 * @str: string
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
}
