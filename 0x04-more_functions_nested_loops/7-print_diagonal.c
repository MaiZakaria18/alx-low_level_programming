#include "main.h"
/**
 * print_diagonal - function that print diagonal
 *
 * @n: number of diagonal printed
 */

void print_diagonal(int n)
{
int x = 0;
int z = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (x < n)
{
while (z < x)
{
_putchar(' ');
z++;
}
_putchar(92);
_putchar('\n');
x++;
}
}
