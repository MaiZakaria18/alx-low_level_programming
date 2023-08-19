#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 *
 * description - function that prints a square followed by a new line.
 *
 * @size: size of the square
 *
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
int x = 0;
while (x < size)
{
int y = 0;
while (y < size)
{
_putchar('#');
y++;
}
_putchar('\n');
x++;
}
}
