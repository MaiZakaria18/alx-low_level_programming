#include "main.h"
/**
 * print_square - function that prints a square
 *
 * description - function that prints a square
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
else
{
int x = 0;
while (x < size)
{
int y = 0;
while (y < size)
{
_putchar(35);
y++;
}
}
_putchar('\n');
x++;
}
}
