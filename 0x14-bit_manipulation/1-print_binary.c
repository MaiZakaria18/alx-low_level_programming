#include "main.h"
#include <stdio.h>

/**
 * print_binary - function
 * @n: int
 */

void print_binary(unsigned long int n)
{
int x, count = 0;
unsigned long int c;
for (x = 63; x >= 0; x--)
{
c = n >> x;
if (c & 1)
{
_putchar('1');
count++;
}
if (count)
{
_putchar('0');
}
}
if (!count)
_putchar('0');
}
