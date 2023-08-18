#include "main.h"

/**
 * print_line -  function that draws a straight line
 * Description -  function that draws a straight line
 * @n: number of times the character _ printed
 */
void print_line(int n)
{
int y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int y = 1; y < n; y++)
{
_putchar(95);
}
_putchar('\n');
}
}
