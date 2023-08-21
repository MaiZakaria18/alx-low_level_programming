#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * Description - function that prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
int length_string;
for (length_string = 0; s[length_string] != '\0'; length_string++)
{
int i;
for (i = length_string - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
}
