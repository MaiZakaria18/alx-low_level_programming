#include "main.h"
/**
 * print_squre - function that prints a square, followed by a new line.
 *
 * description - function that prints a square followed by a new line.
 *
 * @size: size of the square
 *
 */
void print_square(int size)
{
int size = 0;
if (size <= 0)
{
_putchar('\n');
return (0);
}
int x = 0;
while (x < size)
{
int y = 0;
while (y < size)
{
_putchar ('#');
y++;
}
_putchar ('\n');
x++;
}
}
