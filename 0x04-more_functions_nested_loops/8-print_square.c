#include "main.h"
/**
 * print_square - function that prints a square
 * Description - function that prints a square
 * @size: size of the square
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x;
int y;
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
_putchar(35);
_putchar('\n');
}
}
}
}
