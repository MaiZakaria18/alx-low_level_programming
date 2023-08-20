#include "main.h"
/**
 *print_triangle -  function that prints a triangle
 * Description -  function that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x;
int y;
int z;
for (x = 1; x <= size; x++)
{
for (y = 0; y < size - x; y++)
{
_putchar(' ');
}
for (z = 0; z < x; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
