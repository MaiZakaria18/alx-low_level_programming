#include "main.h"
/**
 * print_diagonal - function that print diagonal
 *
 * @n: number of diagonal printed
 */

void print_diagonal(int n)
{
int x = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (x < n)
{
int z = 0;
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
