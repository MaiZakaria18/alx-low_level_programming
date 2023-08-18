#include "main.h"
/**
 * print_diagonal - function that print diagonal
 *
 * @n: number of diagonal printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
for (int x = 0; x < n; x++)
{
for (int z = 0; z < x; z++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
