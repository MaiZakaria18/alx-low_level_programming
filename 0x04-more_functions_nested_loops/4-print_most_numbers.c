#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Description - a function that prints the numbers, from 0 to 9
 *
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
for (int num = 0; num <= 9; num++)
{
if (num != 2 && num != 4)
{
_putchar(num + '0');
}
_putchar('\n');
}
}
