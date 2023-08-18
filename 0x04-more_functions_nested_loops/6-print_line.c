#include "main.h"

/**
 * print_line -  function that draws a straight line
 * Description -  function that draws a straight line
 * @n: number of times the character _ printed
 */
void print_line(int n)
{
int y = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (y < n)
{
_putchar(95);
y++;
}
_putchar('\n');
}
